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

int longestConsecutive(vector<int> &nums)
{
    unordered_set<int> valuesHolder;
    int result = 0;

    for (int value : nums)
    {
        valuesHolder.insert(value);
    }

    for (int value : nums)
    {
        int start = 1;
        if (valuesHolder.count(value - start))
            continue;

        int tempResult = 1;
        while (valuesHolder.count(value + start))
        {
            start++;
            tempResult++;
        }
        result = max(result, tempResult);
    }

    return result;
}

int main()
{
    vector<int> test = {1, 100, 2, 3, 4, 200};
    cout << longestConsecutive(test);
}