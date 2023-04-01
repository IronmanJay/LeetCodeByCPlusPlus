#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
	double findMaxAverage(vector<int>& nums, int k) {
		int tempSum = 0;
		for (int i = 0; i < k; i++)
		{
			tempSum += nums[i];
		}
		int sum = tempSum;
		for (int i = k; i < nums.size(); i++)
		{
			sum = sum - nums[i - k] + nums[i];
			tempSum = max(tempSum, sum);
		}
		return (double)tempSum / k;
	}
};

/*Ö÷º¯ÊýÊ¡ÂÔ*/
int main()
{
	return 0;
}