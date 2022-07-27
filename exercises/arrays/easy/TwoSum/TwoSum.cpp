#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>

using namespace std;

vector<int> solution(vector<int> &nums, int target)
{
    unordered_map<int, int> numsPositions;

    vector<int> result;

    for (int i = 0; i < nums.size(); i++)
    {
        int complement = target - nums[i];
        if (!numsPositions.count(complement))
        {
            numsPositions[nums[i]] = i;
        }
        else
        {
            result = {i, numsPositions[complement]};
            break;
        }
    }

    return result;
}

int main()
{
    vector<int> test1 = {3, 2, 4};
    vector<int> solutionVec = solution(test1, 6);

    for (int value : solutionVec)
    {
        cout << value;
    }
}