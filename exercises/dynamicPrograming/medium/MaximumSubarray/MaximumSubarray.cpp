#include <iostream>
#include <vector> //push_back
#include <string>
#include <unordered_map> //count erase
#include <unordered_set> //count erase
#include <algorithm>     //sort reverse
#include <tuple>         //first second
#include <queue>         //push pop back size empty

using namespace std;

int maxSubArray(vector<int> &nums)
{
    int prevCurr = nums[0];
    int maxProfit = nums[0];

    for (int i = 1; i < nums.size(); i++)
    {
        int curr = max(prevCurr + nums[i], nums[i]);

        if (curr > maxProfit)
        {
            maxProfit = curr;
        }

        prevCurr = curr;
    };

    return maxProfit;
}

int main()
{
    vector<int> test = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    cout << maxSubArray(test);
}