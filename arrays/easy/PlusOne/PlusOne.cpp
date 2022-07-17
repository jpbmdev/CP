#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>

using namespace std;

vector<int> solution(vector<int> &digits)
{
    int holder = 1;
    for (int i = digits.size() - 1; i >= 0; i--)
    {
        if (digits[i] + holder == 10)
        {
            digits[i] = 0;
            holder = 1;
        }
        else
        {
            digits[i] = digits[i] + holder;
            holder = 0;
        }
    }

    if (holder == 0)
    {
        return digits;
    }
    else
    {
        vector<int> result;
        result.push_back(1);
        for (int i = 1; i <= digits.size(); i++)
        {
            result.push_back(digits[i - 1]);
        }
        return result;
    }
}

int main()
{
    vector<int> test1 = {9, 9, 9};
    vector<int> result = solution(test1);
    for (int value : result)
    {
        cout << value;
    }
}