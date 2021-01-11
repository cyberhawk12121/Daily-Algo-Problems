/* 
	There is a heap of stones on a table. You and your friend are playing a game in which you can remove at most 3 stones
	in one turn. Whoever removes the last stone WINS. You're going first!!
	So, write the answer.
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int numberOfStones;
	cin>>numberOfStones;
	if(numberOfStones%4!=0)
		cout<<"I win!";
	else
		cout<<"Better luck next time!";
	
	return 0;
}
