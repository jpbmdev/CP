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

vector<vector<int>> generate(int numRows)
{
    vector<vector<int>> result = {{1}};

    for (int i = 1; i < numRows; i++)
    {
        vector<int> row = {1};

        for (int j = 0; j < i - 1; j++)
        {
            row.push_back(result[i - 1][j] + result[i - 1][j + 1]);
        }

        row.push_back(1);
        result.push_back(row);
    }

    return result;
}

int main()
{
    vector<vector<int>> test = generate(5);
}