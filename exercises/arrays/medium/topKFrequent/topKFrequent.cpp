#include <iostream>
#include <string>
#include <vector>        //push_back pop_back
#include <unordered_map> //count erase
#include <unordered_set> //count erase
#include <algorithm>     //sort reverse
#include <tuple>         //first second
#include <queue>         //push pop back size empty
#include <stack>         //push pop top size empty
#include <bitset>        //bitset<32>(n).to_string()
#include <math.h>        //pow

using namespace std;

vector<int> topKFrequent(vector<int> &nums, int k)
{
    unordered_map<int, int> valueCounter;
    vector<vector<int>> ocurrencesArrays(nums.size() + 1);

    for (int value : nums)
    {
        valueCounter[value]++;
    }

    for (auto value : valueCounter)
    {
        ocurrencesArrays[value.second].push_back(value.first);
    }

    vector<int> result;

    for (int i = ocurrencesArrays.size() - 1; i > 0; i--)
    {
        for (int value : ocurrencesArrays[i])
        {
            if (result.size() < k)
            {
                result.push_back(value);
            }
            else
            {
                break;
            }
        }
    }

    return result;
}

int main()
{
    vector<int> test = {1, 1, 2, 2, 3};
    topKFrequent(test, 2);
}