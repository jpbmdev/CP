#include <iostream>
#include <vector> //push_back
#include <string>
#include <unordered_map> //count erase
#include <unordered_set> //count erase
#include <algorithm>     //sort reverse
#include <tuple>         //first second
#include <queue>         //push pop back size empty

using namespace std;

int rob(vector<int> &nums)
{
    int acum1 = 0;
    int acum2 = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        int currMax = max(acum1 + nums[i], acum2);
        acum1 = acum2;
        acum2 = currMax;
    }

    return acum2;
}

int main()
{
}