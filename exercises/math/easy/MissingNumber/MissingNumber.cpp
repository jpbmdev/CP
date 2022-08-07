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

int missingNumber(vector<int> &nums)
{
    int sum = 0;

    int total = (nums.size() * (nums.size() + 1)) / 2;

    for (int value : nums)
    {
        sum += value;
    }

    return total - sum;
}

int main()
{

    vector<int> test = {9, 6, 4, 2, 3, 5, 7, 0, 1};
    cout << missingNumber(test);
}