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

int maxArea(vector<int> &height)
{
    int result = 0;
    int left = 0;
    int right = height.size() - 1;

    while (left < right)
    {
        int area = (right - left) * min(height[left], height[right]);
        result = max(result, area);

        if (height[left] > height[right])
        {
            right--;
        }
        else
        {
            left++;
        }
    }

    return result;
}

int main()
{

    vector<int> test = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    cout << maxArea(test);
}