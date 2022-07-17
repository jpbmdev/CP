#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>

using namespace std;

int solution(vector<int>& nums)
{
    sort(nums.begin(), nums.end());

    for (int i = 0; i < nums.size(); i++)
    {
        if (i == nums.size() - 1) {
            return nums[i];
        }

        if (nums[i] == nums[i + 1])
        {
            i++;
        }
        else
        {
            return nums[i];
        }
    }

    return nums[0];
}

int main()
{
    vector<int> test = { 1, 2, 2, 3, 3, 5, 5, 4};
    cout << solution(test);
}