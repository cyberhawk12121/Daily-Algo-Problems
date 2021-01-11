#include <bits/stdc++.h>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
	int x;
	cin>>x;
	string s= to_string(x);
	if(s[0]=='-')
		reverse(s.begin()+1, s.end());
	else
		reverse(s.begin(), s.end());
	
	long long p= stoll(s);
	cout<<"Reversed Int: "<<p;
	return 0;
}
