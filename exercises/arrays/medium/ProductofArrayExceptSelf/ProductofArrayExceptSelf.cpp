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

vector<int> productExceptSelf(vector<int> &nums)
{
    vector<int> result(nums.size());

    int prefix = 1;
    for (int i = 0; i < nums.size(); i++)
    {
        result[i] = prefix;
        prefix *= nums[i];
    }

    int postFix = 1;
    for (int i = nums.size() - 1; i >= 0; i--)
    {
        result[i] *= postFix;
        postFix *= nums[i];
    }

    return result;
}

int main()
{
    vector<int> test = {1, 2, 3, 4};
    productExceptSelf(test);
}