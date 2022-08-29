#include <iostream>
#include <string>        //substr
#include <vector>        //push_back pop_back
#include <unordered_map> //[] count erase size
#include <unordered_set> //insert count erase size
#include <algorithm>     //sort reverse max_element
#include <tuple>         //first second
#include <queue>         //push pop front back size empty
#include <stack>         //push pop top size empty
#include <bitset>        //bitset<32>(n).to_string()
#include <math.h>        //pow

using namespace std;

string minWindow(string s, string t)
{
    if (t == "")
        return t;

    unordered_map<char, int> tMap;
    unordered_map<char, int> windowMap;

    for (char value : t)
    {
        tMap[value]++;
    }

    int have = 0;
    int need = tMap.size();

    string res = "";
    int l = 0;

    for (int r = 0; r < s.size(); r++)
    {
        char currChar = s[r];
        windowMap[currChar]++;

        // If a match happened update the have
        if (tMap.count(currChar) && tMap[currChar] == windowMap[currChar])
        {
            have++;
        }

        while (have == need)
        {
            // Update result
            if (res == "")
            {
                res = s.substr(l, r - l + 1);
            }
            else if (r - l + 1 < res.size())
            {
                res = s.substr(l, r - l + 1);
            }

            // Start shirnking till have != need
            windowMap[s[l]]--;
            // If a match happened update the have
            if (tMap.count(s[l]) && tMap[s[l]] > windowMap[s[l]])
            {
                have--;
            }

            l++;
        }
    }

    return res;
}

int main()
{
    cout << minWindow("ADOBECODEBANC", "ABC");
}