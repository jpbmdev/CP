#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
#include <tuple>

using namespace std;

bool solution(string s, string t)
{
    unordered_map<char, int> counter;

    if (s.size() != t.size())
    {
        return false;
    }

    for (int i = 0; i < s.size(); i++)
    {
        counter[s[i]]++;
    }

    for (int i = 0; i < t.size(); i++)
    {
        if (!counter.count(t[i]) || counter[t[i]] == 0)
        {
            return false;
        }

        counter[t[i]]--;
    }

    return true;
}

int main()
{
    string s = "anagramb";
    string t = "nagaram";
    cout << solution(s, t);
}