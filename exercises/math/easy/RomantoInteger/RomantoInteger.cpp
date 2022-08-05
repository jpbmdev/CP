#include <iostream>
#include <string>
#include <vector>        //push_back pop_back
#include <unordered_map> //count erase
#include <unordered_set> //count erase
#include <algorithm>     //sort reverse
#include <tuple>         //first second
#include <queue>         //push pop back size empty
#include <stack>         //push pop top size empty

using namespace std;

int romanToInt(string s)
{
    unordered_map<char, int> map;
    int sum = 0;

    map['I'] = 1;
    map['V'] = 5;
    map['X'] = 10;
    map['L'] = 50;
    map['C'] = 100;
    map['D'] = 500;
    map['M'] = 1000;

    int size = s.size() - 1;

    sum += map[s[size]];

    for (int i = size - 1; i >= 0; i--)
    {
        if (map[s[i]] < map[s[i + 1]])
        {
            sum -= map[s[i]];
        }
        else
        {
            sum += map[s[i]];
        }
    }

    return sum;
}

int main()
{
    string test = "MCM";
    cout << romanToInt(test);
}