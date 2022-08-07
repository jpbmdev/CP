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

bool isValid(string s)
{
    stack<char> parentheses;

    for (char i : s)
    {

        if (parentheses.empty())
        {
            parentheses.push(i);
        }
        else if (i == ']' && parentheses.top() == '[')
        {
            parentheses.pop();
        }
        else if (i == '}' && parentheses.top() == '{')
        {
            parentheses.pop();
        }
        else if (i == ')' && parentheses.top() == '(')
        {
            parentheses.pop();
        }
        else
        {
            parentheses.push(i);
        }
    }

    return parentheses.empty();
}

int main()
{
    cout << isValid("([][]");
}