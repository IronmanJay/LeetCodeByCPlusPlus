#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class Solution {
public:
	int trap(vector<int>& height) {
		int res = 0;
		int left = 0;
		int right = height.size() - 1;
		int leftMax = 0;
		int rightMax = 0;
		while (left <= right)
		{
			if (leftMax < rightMax)
			{
				res += max(0, leftMax - height[left]);
				leftMax = max(leftMax, height[left]);
				left++;
			}
			else
			{
				res += max(0, rightMax - height[right]);
				rightMax = max(rightMax, height[right]);
				right--;
			}
		}
		return res;
	}
};

/*Ö÷º¯ÊýÊ¡ÂÔ*/