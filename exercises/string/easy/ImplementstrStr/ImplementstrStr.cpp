#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
#include <tuple>

using namespace std;

int solution(string haystack, string needle)
{
    int index = -1;
    int needleSize = needle.size();

    for (int i = 0; i < haystack.size(); i++)
    {
        int currentPos = 0;
        if (haystack[i] == needle[currentPos])
        {
            while (haystack[i + currentPos] == needle[currentPos] && i + currentPos < haystack.size())
            {
                currentPos++;
            }
            if (currentPos == needleSize)
            {
                return i;
            }
        }
    }
    return index;
}

int main()
{
    string haystack = "hello";
    string needle = "ll";
    cout << solution(haystack, needle);
}