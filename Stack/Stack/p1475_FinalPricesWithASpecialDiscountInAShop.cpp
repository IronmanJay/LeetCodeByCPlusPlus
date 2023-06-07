#include<vector>
#include<stack>
using namespace std;

class Solution {
public:
	vector<int> finalPrices(vector<int>& prices) {
		stack<int> st;
		for (int i = 0; i < prices.size(); i++) {
			while (!st.empty() && prices[st.top()] >= prices[i]) {
				int temp = st.top();
				prices[temp] -= prices[i];
				st.pop();
			}
			st.push(i);
		}
		return prices;
	}
};

/*Ö÷º¯ÊýÊ¡ÂÔ*/
int main()
{
	return 0;
}