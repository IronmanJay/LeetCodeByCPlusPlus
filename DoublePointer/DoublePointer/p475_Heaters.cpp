#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class Solution {
public:
	int findRadius(vector<int>& houses, vector<int>& heaters) {
		sort(houses.begin(), houses.end());
		sort(heaters.begin(), heaters.end());
		int res = 0;
		for (int i = 0, j = 0; i < houses.size(); i++)
		{
			int curDis = abs(houses[i] - heaters[j]);
			while (j < heaters.size() - 1 && abs(houses[i] - heaters[j]) >= abs(houses[i] - heaters[j + 1]))
			{
				j++;
				curDis = abs(houses[i] - heaters[j]);
			}
			res = max(res, curDis);
		}
		return res;
	}
};

/*Ö÷º¯ÊıÊ¡ÂÔ*/