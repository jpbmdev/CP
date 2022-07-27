#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>

using namespace std;

int main()
{
    int num = 0;
    // This declares a lambda, which can be called just like a function
    auto increment = [](int &num)
    {
        num++;
    };

    increment(num);

    cout << num;

    // We can also define the return type of a lambda
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
}