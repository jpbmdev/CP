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

int trap(vector<int> &height)
{
    int l = 0;
    int r = height.size() - 1;

    int maxL = height[l];
    int maxR = height[r];

    int result = 0;

    while (l < r)
    {
        if (maxL < maxR)
        {
            int temp = maxL - height[l++];
            result += temp > 0 ? temp : 0;
            maxL = max(maxL, height[l]);
        }
        else
        {
            int temp = maxR - height[r--];
            result += temp > 0 ? temp : 0;
            maxR = max(maxR, height[r]);
        }
    }

    return result;
}

int main()
{

    vector<int> test = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    cout << trap(test);
}