#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
	int countTriplets(vector<int>& nums) {
		vector<int> count(1 << 16);
		int res = 0;
		for (int x : nums)
		{
			for (int y : nums)
			{
				count[x & y]++;
			}
		}
		for (int x : nums)
		{
			for (int j = 0; j < (1 << 16); j++)
			{
				if ((x & j) == 0)
				{
					res += count[j];
				}
			}
		}
		return res;
	}
};

/*Ö÷º¯ÊýÊ¡ÂÔ*/