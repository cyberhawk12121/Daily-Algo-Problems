/*
	PROBLEM:
	You can perform the following operations on the string, :
		1. Capitalize zero or more of 's lowercase letters.
		2. Delete all of the remaining lowercase letters in .
	Given two strings,  and , determine if it's possible to make  equal to  as described. 
	If so, print YES on a new line. Otherwise, print NO.
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
	string str1,str2;
    int i,j;
	int t;
	cin>>t;
	while(t--)
	{
	    cin>>str1>>str2;
	    int flag=0, pos=0;
	    
	    for(i=0;i<str2.length(); i++)
	    {
	    	cout<<"str2: "<<str2[i]<<endl;
	    	if(pos>=str1.length())
	    		flag=0;
	    	for(j=pos;j<str1.length(); j++)
	    	{
	    		cout<<"value of J: "<<j<<"\n";
	    		cout<<" -----> str1: "<<str1[j]<<endl;
	    		if(str2[i]==str1[j] || toupper(str1[j])==str2[i])
	    		{
	    			pos=j+1;
	    			flag=1;
	    			break;
				}
				if(str2[i]!=str1[j] && islower(str1[j]))
				{
					continue;	
				}
				if(str2[i]!=str1[j] && isupper(str1[j]))
				{
					flag=0;
				}
			}
			cout<<"----> FLAG: "<<flag<<"\n";	
			cout<<"Pos: "<<pos<<" "<<"str1 lenght: "<<str1.length()<<endl;
    	
			if(flag==0)
				break;
			
		}
		cout<<"\nValue of i: "<<i<<endl;
		while(i<str1.length())
        {   
            if(isupper(str1[i]))
                flag=0;
            i++;
        }
	
		if(flag==1)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
	return 0;
}
