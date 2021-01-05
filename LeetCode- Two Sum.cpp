/* 
	Question: 
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int flag=0, target=9;
	int arr[]= {2,1,11,9,4};
	for(int i=0;i<5;i++)
	{
		for(int j=i+1; j<5;j++)
		{
			if(arr[i]+arr[j]==target)
			{
				cout<<i<<" and "<<j;
				flag=1;
				break;
			}
		}
		if(flag==1)
			break;
	}
	return 0;
}
