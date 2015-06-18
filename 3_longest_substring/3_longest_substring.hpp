
// Source : https://leetcode.com/problems/longest-substring-without-repeating-characters/
// Author : Sivan

/*
	Given a string, find the length of the longest substring without repeating characters. 
	For example, the longest substring without repeating letters for "abcabcbb" is "abc", which the length is 3. 
	For "bbbbb" the longest substring is "b", with the length of 1.
*/

#include <string>
#include <map>
using namespace std;

class Solution {
public:
	int lengthOfLongestSubstring(string s) 
	{
		int max_len = 0;
		int len = 0;
		size_t start_index = 0;
		std::map<char,unsigned int> m;
		size_t size = s.size();
		for (size_t i=0; i<size; ++i)
		{
			if (m.find(s[i]) == m.end())
			{	
				++len;
			}
			else
			{
				start_index = (start_index > m[s[i]]) ? start_index : m[s[i]];
				len = i - start_index;
			}
			m[s[i]] = i;
			if (len > max_len)
			{
				max_len = len;
			}
		}
		return max_len;
	}
};