#include <iostream>
#include <string>        //substr
#include <vector>        //push_back pop_back
#include <unordered_map> //[] count erase size
#include <unordered_set> //insert count erase size
#include <algorithm>     //sort reverse max_element (.begin(), .end())
#include <tuple>         //first second
#include <queue>         //push pop front back size empty
#include <deque>         //front back push_front/back pop_front/back
#include <stack>         //push pop top size empty
#include <bitset>        //bitset<32>(n).to_string()
#include <math.h>        //pow
// Native                //swap min max rand tolower

using namespace std;

vector<int> maxSlidingWindow(vector<int> &nums, int k)
{
    vector<int> result;
    deque<int> dq;

    int r = 0;
    int l = 0;

    while (r < nums.size())
    {

        while (!dq.empty() && dq.back() < nums[r])
        {
            dq.pop_back();
        }

        dq.push_back(nums[r]);

        if (r - l + 1 == k)
        {
            result.push_back(dq.front());

            if (dq.front() == nums[l])
            {
                dq.pop_front();
            }

            l++;
        }
        r++;
    }

    return result;
}

int main()
{
}