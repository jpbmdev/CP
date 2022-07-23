#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
#include <tuple>

using namespace std;

string solution(vector<string> &strs)
{
    string result = "";
    string base = strs[0];

    for (int i = 0; i < base.size(); i++)
    {
        for (int j = 0; j < strs.size(); j++)
        {
            if (strs[j][i] != base[i])
            {
                return result;
            }
        }
        result += base[i];
    }
    return result;
}

int main()
{

    vector<string> test = {"flower", "flow", "flight"};
    cout << solution(test);
}