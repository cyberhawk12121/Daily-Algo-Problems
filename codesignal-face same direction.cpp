#include <bits/stdc++.h>
using namespace std;

int main()
{
	int state=0,i;
	string commands="LLARAAAA";
	
	for(i=0;i<commands.length();i++)
	{
		if(state==1)
        {
        	cout<<"!!!!!";
        	break;
		}    
        else if(commands[i]=='L')
        {
        	state--;
        	cout<<"Left-> state: "<<state<<endl;
		}
		    
        else if(commands[i]=='R')
        {
        	state++;
        	cout<<"Right-> state: "<<state<<endl;
		}
            
        else if(commands[i]=='A' and state<=0)
        {
			state+=2;
			cout<<"A(-ve)-> state: "<<state<<endl;
		}
        	
        else if(commands[i]=='A' and state>0)
        {
        	state-=2;
			cout<<"A(+ve)-> state: "<<state<<endl;	
		}
    }
    cout<<i;
	return 0;
}
