#include <bits/stdc++.h>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
	int rev = 0;
	int x=123456789;
    while (x != 0) {
        int pop = x % 10;
        x /= 10;
        if (rev > INT_MAX/10 || (rev == INT_MAX / 10 && pop > 7)) return 0;
        if (rev < INT_MIN/10 || (rev == INT_MIN / 10 && pop < -8)) return 0;
        rev = rev * 10 + pop;
	}
 	cout<<rev;
 return 0;       
}
