/* 
PROBLEM: 
You are in charge of the cake for a child's birthday. You have decided the cake will have one candle for each year of their total age. 
They will only be able to blow out the tallest of the candles. Count how many candles are tallest.
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long int ar[]= {44 ,53 ,31 ,27 ,77 ,60 ,66 ,77 ,26, 36};
	long long count=1;
	long long int max= ar[0];
	long long pos;
	
	for(long long i=0; i<10;i++)
	{
		if(ar[i]>max)
		{
			max=ar[i];
			pos= i;
		}		
	}
	
	for(long long i=1; i<10;i++)
	{
		if(ar[i]==max && i!=pos)
			++count;	
	}
	cout<<"COUNT: "<<count;
	return 0;
}
