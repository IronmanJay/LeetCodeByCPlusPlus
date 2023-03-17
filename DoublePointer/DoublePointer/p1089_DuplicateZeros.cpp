#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
	void duplicateZeros(vector<int>& arr) {
		int len = arr.size();
		int i = -1;
		int top = 0;
		while (top < len)
		{
			i++;
			if (arr[i] == 0)
			{
				top += 2;
			}
			else
			{
				top++;
			}
		}
		int j = len - 1;
		if (top == len + 1)
		{
			arr[j] = 0;
			j--;
			i--;
		}
		while (j >= 0)
		{
			arr[j] = arr[i];
			j--;
			if (arr[i] == 0)
			{
				arr[j] = arr[i];
				j--;
			}
			i--;
		}
	}
};

/*Ö÷º¯ÊýÊ¡ÂÔ*/