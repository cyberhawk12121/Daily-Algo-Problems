#include <bits/stdc++.h>
#include <vector>
using namespace std;

vector<vector<int>> permute(vector<int>& nums)
{
	if(nums.size()<=1)
		return {nums};
	
	vector<vector<int>> result;
		
	for(int i=0;i<nums.size(); i++)
	{
		vector<int> v(nums.begin(), nums.end());
		v.erase(v.begin()+1);
		auto res= permute(v);
		for(int j=0; j<res.size(); j++)
		{
			vector<int> _v= res[j];
			_v.insert(_v.begin(), nums[j]);
			result.push_back(_v);
		}
	}
	return result;
}

int main()
{
	vector<int> nums;
	nums.push_back(1);
	nums.push_back(2);
	nums.push_back(3);
	vector<vector<int>> =permute(nums);
	for(int i=0; i<)
	
	return 0;
}
