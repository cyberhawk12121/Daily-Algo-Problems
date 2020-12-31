#include <bits/stdc++.h>
#include <map>
using namespace std;

int main()
{
	map<char,int> m;
	string s="abacabad";
	int i,j,count=0;
	for(i=0;i<s.length();i++)
	{
//		m[s[i]]++;	This alone works as well
		
		// If the char s[i] is not present in the map, then set the initial frequency as 1
		if(m.find(s[i])==m.end())
			m.insert(pair<char,int>(s[i],1));
		// If the s[i] char is already present then just increment the frequency
		else
			m[s[i]]++;
				
	}	
		
	for(char k: s){
		if(m[k]==1)
		{
			cout<<k;
			break;
		}	
	}
	return 0;
}
