#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
	int divisorSubstrings(int num, int k) {
		int res = 0;
		int i, count, temp;
		int* temp_count = (int*)malloc(sizeof(int) * 10);
		for (i = 0, temp = num; temp > 0; temp /= 10, i++) {
			temp_count[i] = temp % 10;
		}
		count = i - k + 1;
		for (i = 0; i < count; i++) {
			int sum = 0;
			for (int j = 0; j < k; j++) {
				sum *= 10;
				sum += temp_count[i + k - j - 1];
			}
			if (sum != 0 && num % sum == 0) {
				res++;
			}
		}
		return res;
	}
};

/*Ö÷º¯ÊýÊ¡ÂÔ*/