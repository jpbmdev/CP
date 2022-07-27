#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>

using namespace std;

int solution(vector<int> prices)
{
    int profit = 0;
    for (int i = 1; i < prices.size(); i++)
    {
        if (prices[i] - prices[i - 1] > 0)
        {
            profit += prices[i] - prices[i - 1];
        }
    }
    return profit;
}

int main()
{
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    cout << solution(prices);
}