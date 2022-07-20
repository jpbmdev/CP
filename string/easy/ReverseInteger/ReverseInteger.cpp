#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
#include <tuple>

using namespace std;

int solution(int x)
{
    int result = 0;

    while (x > 9 || x < -9)
    {
        int temp = x % 10;
        x /= 10;
        result = result * 10 + temp;
    }

    if (result > INT_MAX / 10 || (result == INT_MAX && x > 7))
    {
        return 0;
    }

    if (result < INT_MIN / 10 || (result == INT_MAX && x > 8))
    {
        return 0;
    }
    return (result * 10) + (x % 10);
}

int main()
{
    int test = -10;
    cout << solution(test);
}