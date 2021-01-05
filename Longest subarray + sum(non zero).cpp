#include <bits/stdc++.h>
using namespace std;

int main(){
	int arr[] = { -2,2,1,2,3,0,-3,-3,6,0,9,8,200 }, i; 
	int N = sizeof(arr) / sizeof(arr[0]); 
	int ans=0;
	for(i=0;i<N;)
	{
		int s=i;	// s=start
		
		while(s<N && arr[s]==0)	s++;
		int e=s;	// e=end
		int c=0;	// c= count of negative values
		int startneg=-1, endneg=-1;
		while(e<N && arr[e]!=0)
		{
			if(arr[e]<0)
			{
				c++;
				if(startneg==-1)	
					startneg=e;
				endneg=e;
			}
			e++;
		}
		if(c%2==0)	ans= max(ans, e-s);
		else
		{
			cout<<"STARTNEG: "<<startneg<<"\t ENDNEG "<<endneg<<endl;
			if(startneg!=-1)ans=max(ans, e-startneg-1);
			if(endneg!=-1) ans=max(ans, endneg-s);
		}
		cout<<"FOR i:  "<<i<<endl;
		cout<<"s= "<<s<<", End= "<<e<<", startneg= "<<startneg<<", Endneg= "<<endneg<<", Count: "<<c<<", ANS= "<<ans<<endl;
		i=e+1;
	}
	
	cout<<"Answer is :"<<ans;
	return 0;
}
