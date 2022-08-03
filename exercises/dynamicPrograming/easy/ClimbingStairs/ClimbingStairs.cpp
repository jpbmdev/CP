#include <iostream>
#include <vector> //push_back
#include <string>
#include <unordered_map> //count erase
#include <unordered_set> //count erase
#include <algorithm>     //sort reverse
#include <tuple>         //first second
#include <queue>         //push pop back size empty

using namespace std;

int memo[46] = {0};

int climbStairs(int n)
{
    if (n == 0)
    {
        return 1;
    }
    if (n < 0)
    {
        return 0;
    }
    if (memo[n] != 0)
    {
        return memo[n];
    }
    return memo[n] = climbStairs(n - 1) + climbStairs(n - 2);
}
int main()
{
}