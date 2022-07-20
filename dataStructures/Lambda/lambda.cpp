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
}