
// url    : https://leetcode.com/problems/two-sum/
// date   : [6/10/2015 sivan]

// method : if the array is sorted

#include <vector>
#include <string>
#include <map>

using namespace std;

class Solution
{
public:
	vector<int> twoSum(vector<int>& nums, int target)
	{
		vector<int> rslt;
		int low = 0, high = nums.size() - 1;
		int total = 0;
		bool find_it = false;

		while ( !find_it )
		{
			total = nums[low] + nums[high];
			total == target ? find_it = true : (total < target ? ++low : --high);
		}
		rslt.push_back(low+1);
		rslt.push_back(high+1);
		return rslt;
	}
};