#include <iostream>
#include <string>
#include <vector>        //push_back pop_back
#include <unordered_map> //[] count erase
#include <unordered_set> //insert count erase
#include <algorithm>     //sort reverse max_element
#include <tuple>         //first second
#include <queue>         //push pop back size empty
#include <stack>         //push pop top size empty
#include <bitset>        //bitset<32>(n).to_string()
#include <math.h>        //pow

using namespace std;

int characterReplacement(string s, int k)
{

    int r = 0;
    int l = 0;
    int result = 0;
    vector<int> ocurrences(26);

    while (r < s.size())
    {
        ocurrences[s[r] - 'A']++;
        int maxOcurr = *max_element(ocurrences.begin(), ocurrences.end());

        while ((r - l + 1) - maxOcurr > k)
        {
            ocurrences[s[l] - 'A']--;
            l++;
        }

        result = max(result, r - l + 1);
        r++;
    }

    return result;
}

int main()
{
    cout << characterReplacement("ABAB", 2);
}