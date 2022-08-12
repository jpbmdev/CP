#include <iostream>
#include <string>
#include <vector>        //push_back pop_back
#include <unordered_map> //count erase
#include <unordered_set> //count erase
#include <algorithm>     //sort reverse
#include <tuple>         //first second
#include <queue>         //push pop back size empty
#include <stack>         //push pop top size empty
#include <bitset>        //bitset<32>(n).to_string()
#include <math.h>        //pow

using namespace std;

vector<vector<string>> groupAnagrams(vector<string> &strs)
{

    unordered_map<string, int> keys;
    vector<vector<string>> result;

    for (string value : strs)
    {
        string code = value;
        sort(code.begin(), code.end());

        if (!keys.count(code))
        {
            result.push_back({value});
            keys[code] = result.size() - 1;
        }
        else
        {
            result[keys[code]].push_back({value});
        }
    }

    return result;
}

int main()
{
    vector<string> test = {"cab", "tin", "pew", "duh", "may", "ill", "buy", "bar", "max", "doc"};
    groupAnagrams(test);
}