#include <bits/stdc++.h>
using namespace std;

bool match(string s1, string s2, int n1, int n2)
{
	
	if(n1==0 || n2==0)
	{
		cout<<"Str1: "<<s1[n1-1]<<" str2: "<<s2[n2-1]<<endl;
		cout<<"First False!!"<<endl;
		return true;
	}
	
		
	if(s1[n1-1]== s2[n2-1] || toupper(s1[n1-1])==s2[n2-1])
	{
		cout<<"Str1: "<<s1[n1-1]<<" str2: "<<s2[n2-1]<<endl;
		cout<<"Return True!! first true if()"<<endl;
		return match(s1,s2,n1-1,n2-1);
	}
		
	else if(s1[n1-1]!=s2[n2-1] && isupper(s1[n1-1]))
	{
		cout<<"Str1: "<<s1[n1-1]<<" str2: "<<s2[n2-1]<<endl;
		cout<<"Return FALSE!! second last"<<endl;
		return false;
	}
	else if(s1[n1-1]!=s2[n2-1] && isupper(s1[n1-1]))
	{
		cout<<"Str1: "<<s1[n1-1]<<" str2: "<<s2[n2-1]<<endl;
		cout<<"Return FALSE!! second last"<<endl;
		return false;
	}	
}

int main()
{
    string str1,str2;
    cin>>str1>>str2;
    cout<<"\nANSWER: \n"<<match(str1,str2, str1.length(),str2.length())<<endl;
    if(match(str1,str2, str1.length(),str2.length()))
        cout<<"YES";
    else
        cout<<"NO";
	return 0;
}
