#include <iostream>
#include <string>
#include <vector>        //push_back pop_back
#include <unordered_map> //[] count erase
#include <unordered_set> //insert count erase
#include <algorithm>     //sort reverse
#include <tuple>         //first second
#include <queue>         //push pop back size empty
#include <stack>         //push pop top size empty
#include <bitset>        //bitset<32>(n).to_string()
#include <math.h>        //pow

using namespace std;

vector<vector<int>> threeSum(vector<int> &nums)
{

    sort(nums.begin(), nums.end());

    vector<vector<int>> result;

    for (int i = 0; i < nums.size(); i++)
    {
        if (i != 0 && nums[i - 1] == nums[i])
            continue;

        int min = i + 1;
        int max = nums.size() - 1;

        int curr = 0 - nums[i];

        while (min < max)
        {
            if (nums[max] + nums[min] > curr)
            {
                max--;
            }
            else if (nums[max] + nums[min] < curr)
            {
                min++;
            }
            else if (nums[max] + nums[min] == curr)
            {
                result.push_back({nums[i], nums[min], nums[max]});
                min++;
                while (nums[min] == nums[min - 1] && min < max)
                {
                    min++;
                }
            }
        }
    }

    return result;
}

int main()
{
    vector<int> test = {-1, 0, 1, 2, -1, -4};
    vector<vector<int>> result = threeSum(test);
}