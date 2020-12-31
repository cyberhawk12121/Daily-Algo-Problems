#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	int arr[27]={0}, count=1, maxcount=1,i,j;
	cin>>s;
	int flag=1;
	int k=0;
	for(i=1 ;i<s.length(); i++)
	{
		cout<<"For: "<<s[i]<<", i= "<<i<<endl;
		for(j=i-1; j>=k; j--)
		{
			cout<<"\tvalue of j= "<<j<<endl;
			if(s[j]!=s[i])
			{
				flag=0;
			}
			else{
				k=j+1;
				i=k;
				flag=1;
				break;
			}	
		}

		if(flag==1)
		{
			if(maxcount<count)
				maxcount=count;
			count=1;
		}	
		else
			++count;
		
		cout<<"\tFlag= "<<flag<<", ";
		cout<<"K= "<<k<<", ";
		cout<<"MAX COUNT= "<<maxcount;
		cout<<", COUNT= "<<count<<endl;
	}
	if(s.length()==1)
		cout<<"1";
	else
		cout<<"\nFinal Count: "<<max(maxcount, count);
	
	return 0;
}
