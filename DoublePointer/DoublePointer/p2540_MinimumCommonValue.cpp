#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
	int getCommon(vector<int>& nums1, vector<int>& nums2) {
		int index1 = 0;
		int index2 = 0;
		int len1 = nums1.size();
		int len2 = nums2.size();
		while (index1 < len1 && index2 < len2)
		{
			if (nums1[index1] == nums2[index2])
			{
				return nums1[index1];
			}
			else if (nums1[index1] < nums2[index2])
			{
				index1++;
			}
			else if (nums1[index1] > nums2[index2])
			{
				index2++;
			}
		}
		return -1;
	}
};

/*Ö÷º¯ÊıÊ¡ÂÔ*/