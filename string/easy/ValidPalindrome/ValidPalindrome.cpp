#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
#include <tuple>

using namespace std;

bool solution(string s)
{
    auto isAlphaNum = [](char value)
    {
        if ((value > 47 && value < 58) || (value > 64 && value < 91) || (value > 96 && value < 123))
        {
            return true;
        };
        return false;
    };

    auto lowerCase = [](char value) -> char
    {
        if (value > 64 && value < 91)
        {
            return value + 32;
        }
        else
        {
            return value;
        }
    };

    int start = 0;
    int end = s.size() - 1;

    while (start < end)
    {
        while (start < end && !isAlphaNum(s[start]))
        {
            start++;
        }
        while (start < end && !isAlphaNum(s[end]))
        {
            end--;
        }
        if (lowerCase(s[start]) != lowerCase(s[end]))
        {
            return false;
        }
        start++;
        end--;
    }

    return true;
}

int main()
{
    string test = "A man, a plan, a canal: Panama";
    cout << solution(test);
}