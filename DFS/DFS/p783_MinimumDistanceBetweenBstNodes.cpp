#include<iostream>
#include<algorithm>
using namespace std;

struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode() : val(0), left(nullptr), right(nullptr) {}
	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
	TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
	void inOrder(TreeNode* root, int& pre, int& res)
	{
		if (root != nullptr)
		{
			inOrder(root->left, pre, res);
			if (pre != -1)
			{
				res = min(res, abs(root->val - pre));
			}
			pre = root->val;
			inOrder(root->right, pre, res);
		}
	}

	int minDiffInBST(TreeNode* root)
	{
		int pre = -1;
		int res = INT_MAX;
		inOrder(root, pre, res);
		return res;
	}
};

int main()
{
	return 0;
}