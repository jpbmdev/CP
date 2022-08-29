#include <iostream>
#include <vector> //push_back
#include <string>
#include <unordered_map> //count erase
#include <unordered_set> //count erase
#include <algorithm>     //sort reverse
#include <tuple>         //first second
#include <queue>         //push pop back size empty

using namespace std;

int maxProfit(vector<int> &prices)
{
    int maxProfit = 0;
    int currMin = prices[0];

    for (int i = 1; i < prices.size(); i++)
    {
        if (prices[i] < currMin)
        {
            currMin = prices[i];
        }

        if (prices[i] - currMin > maxProfit)
        {
            maxProfit = prices[i] - currMin;
        }
    }

    return maxProfit;
}

int main()
{
    vector<int> test = {7, 1, 5, 3, 6, 4};

    cout << maxProfit(test);
}
