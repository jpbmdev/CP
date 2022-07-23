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
    int index = 0;
    int result = 0;
    int sign = 1;
    int size = s.size();

    while (index < size && s[index] == ' ')
    {
        index++;
    }

    if (index < size && s[index] == '+')
    {
        sign = 1;
        index++;
    }
    else if (index < size && s[index] == '-')
    {
        sign = -1;
        index++;
    }

    while (isdigit(s[index]) && index < size)
    {
        int pop = s[index] - '0';
        if (result > INT_MAX / 10 || (result == INT_MAX / 10 && pop > 7))
        {
            return sign == 1 ? INT_MAX : INT_MIN;
        }
        result = (result * 10) + pop;
        index++;
    }

    return result * sign;
}

int main()
{
    string test = "      -478dr";
    cout << solution(test);
}