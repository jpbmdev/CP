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

int lengthOfLongestSubstring(string s)
{
    int result = 0;
    int r = 0;
    int l = 0;
    vector<int> charOcurr(256);

    while (r < s.size())
    {
        charOcurr[s[r]]++;

        while (charOcurr[s[r]] > 1)
        {
            charOcurr[s[l]]--;
            l++;
        }

        result = max(result, r - l + 1);
        r++;
    }

    return result;
}

int main()
{
    cout << lengthOfLongestSubstring("abcabcbb");
}