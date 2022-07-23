#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
#include <tuple>

using namespace std;

int solution(string s)
{
    unordered_map<char, int> counter;

    for (int i = 0; i < s.size(); i++)
    {
        counter[s[i]]++;
    }

    for (int i = 0; i < s.size(); i++)
    {
        if (counter[s[i]] == 1)
        {
            return i;
        }
    }

    return -1;
}

int main()
{
    string test = "leetcode";
    cout << solution(test);
}