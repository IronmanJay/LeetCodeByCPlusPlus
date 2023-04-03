#include<iostream>
#include<algorithm>
using namespace std;

class Solution {
public:
	int minimumRecolors(string blocks, int k) {
		int sumW = 0;
		for (int i = 0; i < k; i++)
		{
			if (blocks[i] == 'W')
			{
				sumW++;
			}
		}
		int res = sumW;
		for (int i = k; i < blocks.size(); i++)
		{
			if (blocks[i] == 'W')
			{
				sumW++;
			}
			if (blocks[i - k] == 'W')
			{
				sumW--;
			}
			res = min(res, sumW);
		}
		return res;
	}
};

/*Ö÷º¯ÊýÊ¡ÂÔ*/