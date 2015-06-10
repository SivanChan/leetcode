
// url    : https://leetcode.com/problems/two-sum/
// date   : [6/10/2015 sivan]

// method : Naive Approach

#include <vector>
#include <string>

using namespace std;

class Solution
{
public:
	vector<int> twoSum(vector<int>& nums, int target)
	{
		vector<int> rslt;
		size_t size = nums.size();
		for (size_t i=0; i<size-1; ++i)
		{
			for (size_t j=i+1; j<size; ++j)
			{
				if ( nums[i] + nums[j] == target )
				{
					rslt.push_back(i+1);
					rslt.push_back(j+1);
					break;
				}
			}
		}
		return rslt;
	}
};