#include <iostream>
#include <string>
#include <vector>        //push_back pop_back
#include <unordered_map> //[] count erase
#include <unordered_set> //insert count erase
#include <algorithm>     //sort reverse
#include <tuple>         //first second
#include <queue>         //push pop back size empty
#include <stack>         //push pop top size empty
#include <bitset>        //bitset<32>(n).to_string()
#include <math.h>        //pow

using namespace std;

string encode(vector<string> list)
{
    string res = "";
    for (string value : list)
    {
        res += to_string(value.size()) + "#" + value;
    }
    return res;
}

vector<string> decode(string list)
{
    vector<string> res;
    int i = 0;

    while (i < list.length())
    {
        int j = i;
        while (list[j] != '#')
        {
            j++;
        }
        int wordSize = stoi(list.substr(i, j));
        j++;
        res.push_back(list.substr(j, wordSize));
        i = j + wordSize;
    }

    return res;
}

int main()
{
    vector<string> test = {"af4q34", ".f4opw.wjfeads", " 4adfvar r4"};
    string crypt = encode(test);
    cout << crypt << endl;
    vector<string> decrypt = decode(crypt);
    for (string value : decrypt)
    {
        cout << value << endl;
    }
}