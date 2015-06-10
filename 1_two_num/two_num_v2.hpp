
// url    : https://leetcode.com/problems/two-sum/
// date   : [6/10/2015 sivan]

// method : HashMap

#include <vector>
#include <string>
#include <map>

using namespace std;

class Solution
{
public:
	vector<int> twoSum(vector<int>& nums, int target)
	{
		std::map<int,int> pool;
		vector<int> rslt;
		size_t size = nums.size();
		for (size_t i=0; i<size; ++i)
		{
			auto it = pool.find(nums[i]);
			if (it == pool.end())
			{
				pool[target - nums[i]] = i;
			}
			else
			{
				rslt.push_back(it->second + 1);
				rslt.push_back(i+1);
				break;
			}
		}
		return rslt;
	}
};