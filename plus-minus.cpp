#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int arr[100];
	double n;
	cin>>n;
	double pos=0,neg=0,zero=0;
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	
	for(int i=0; i<n; i++)
	{
		if(arr[i]>0)
			pos++;
		else if(arr[i]<0)
			neg++;
		else
			zero++;
	}
	
	cout<<setprecision(6)<<posi= pos/n<<endl;
	cout<<setprecision(6)<<neg/n<<endl;
	cout<<setprecision(6)<<zero/n;
	return 0;
}
