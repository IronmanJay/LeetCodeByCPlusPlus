#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
	static constexpr int dirs[4][2] = { {1,0},{0,1},{-1,0},{0,-1} };

	int dfs(vector<vector<int>>& matrix, int m, int n, int x, int y, vector<vector<int>>& memo)
	{
		if (memo[x][y] != 0)
		{
			return memo[x][y];
		}
		memo[x][y]++;
		for (int i = 0; i < 4; i++)
		{
			int newX = x + dirs[i][0];
			int newY = y + dirs[i][1];
			if (newX >= 0 && newX < m && newY >= 0 && newY < n && matrix[newX][newY] > matrix[x][y])
			{
				memo[x][y] = max(memo[x][y], dfs(matrix, m, n, newX, newY, memo) + 1);
			}
		}
		return memo[x][y];
	}

	int longestIncreasingPath(vector<vector<int>>& matrix) {
		int m = matrix.size();
		int n = matrix[0].size();
		auto memo = vector<vector<int>>(m, vector<int>(n));
		int res = 0;
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
			{
				res = max(res, dfs(matrix, m, n, i, j, memo));
			}
		}
		return res;
	}
};

/*Ö÷º¯ÊýÊ¡ÂÔ*/