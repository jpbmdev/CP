#include <iostream>
#include <string>        //substr
#include <vector>        //push_back pop_back
#include <unordered_map> //[] count erase
#include <unordered_set> //insert count erase
#include <algorithm>     //sort reverse max_element
#include <tuple>         //first second
#include <queue>         //push pop front back size empty
#include <stack>         //push pop top size empty
#include <bitset>        //bitset<32>(n).to_string()
#include <math.h>        //pow

using namespace std;

bool checkInclusion(string s1, string s2)
{
    int n1 = s1.size();
    int n2 = s2.size();

    if (n1 > n2)
        return false;

    vector<int> s1count(26);
    vector<int> s2count(26);

    for (int i = 0; i < n1; i++)
    {
        s1count[s1[i] - 'a']++;
        s2count[s2[i] - 'a']++;
    }

    int matches = 0;

    for (int i = 0; i < 26; i++)
    {
        if (s1count[i] == s2count[i])
            matches++;
    }

    int l = 0;
    for (int r = n1; r < n2; r++)
    {
        if (matches == 26)
            return true;

        int index = s2[r] - 'a';
        s2count[index]++;
        if (s1count[index] == s2count[index])
        {
            matches++;
        }
        else if (s1count[index] == s2count[index] - 1)
        {
            matches--;
        }

        index = s2[l] - 'a';
        s2count[index]--;
        if (s1count[index] == s2count[index])
        {
            matches++;
        }
        else if (s1count[index] == s2count[index] + 1)
        {
            matches--;
        }

        l++;
    }

    return matches == 26;
}

int main()
{
    cout << checkInclusion("adc", "dcda");
}