#include <bits/stdc++.h>
#include <vector>
using namespace std;

class Node{
	public:
		int data;
		Node *next;
};

void insert_back(Node **head, int data)
{
	Node *ptr= new Node();
	Node *last= *head;	
	ptr->data= data;
	
	if(*head== NULL)
	{
		*head= ptr;
		return;
	}	

	while(last->next!=NULL)
	{
		last= last->next;
	}
	last->next= ptr;
}

void insert(Node **head, int data)
{
	Node *ptr= new Node();
	ptr->data= data;
	ptr->next= *head;
	*head= ptr;
}

int main()
{	
	vector<int> arr1;
	vector<int> arr2;
	Node *head3= new Node();
	head3=NULL;
	// LL-1
	Node *head1= new Node();
	head1->data= 1;
	head1->next=NULL;
	insert(&head1, 2);
	insert(&head1, 3);
	insert(&head1, 4);
	// LL-2
	Node *head2= new Node();
	head2->data= 5;
	head2->next=NULL;
	insert(&head2, 6);
	insert(&head2, 7);
	insert(&head2, 8);
	cout<<"Linked List-1"<<endl;
	Node *ptr= head1;
	int i;
	
	// SAVING THE NUMBERS FROM BOTH LL IN AN ARRAY
	while(ptr!=NULL)
	{
		cout<<ptr->data<<" ";
		arr1.push_back(ptr->data);
		ptr= ptr->next;
	}
	cout<<"\nLinked List-2"<<endl;
	Node *ptr2= head2;
	while(ptr2!=NULL)
	{
		arr2.push_back(ptr2->data);
		cout<<ptr2->data<<" ";
		ptr2= ptr2->next;
	}
	
	// PUTTING THE FINAL ANSWER IN ANOTHER LINKED LIST!!! THIS IS THE ACTUAL AnsWER
	int carry=0,p;
	int sum=0;
	for(i=0; i<arr1.size(); i++)
	{
		sum=arr1[i]+arr2[i]+carry;
		p= sum%10;
		insert_back(&head3, p);
		carry= sum/10;		
	}
	Node *ptr3= head3;
	cout<<"\nFINAL LL: \n";
	while(ptr3!=NULL)
	{
		cout<<ptr3->data<<" ";
		ptr3= ptr3->next;
	}
	cout<<"\n";
	
	// CONVERTING THE ARRAY NUMBERS IN REAL NUMBER IN REVERSE ORDER	
	int sum1=0, sum2=0;
	int number1, number2;
	for(i=0;i<arr1.size(); i++)
	{
		sum1+= arr1[i]* pow(10,i);
	}
	
	for(i=0;i<arr2.size(); i++)
	{
		sum2+= arr2[i]* pow(10,i);
	}
	cout<<"\nNumber 1 and Number 2: "<<sum1<<" "<<sum2;
			
	// ADDING THE TWO NUMBERS
	cout<<"\nFinal Answer: "<<sum1+sum2;
			
	return 0;
}
