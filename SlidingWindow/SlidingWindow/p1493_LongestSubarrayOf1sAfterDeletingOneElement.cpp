#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
	int longestSubarray(vector<int>& nums) {
		int len = nums.size();
		int left = 0;
		int right = 0;
		int zero_count = 0;
		int res = 0;
		while (right < len) {
			if (nums[right] == 0) {
				zero_count++;
			}
			while (zero_count > 1) {
				if (nums[left] == 0) {
					zero_count--;
				}
				left++;
			}
			res = max(res, right - left + 1);
			right++;
		}
		return res - 1;
	}
};

/*Ö÷º¯ÊýÊ¡ÂÔ*/