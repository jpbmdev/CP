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

int hammingWeight(uint32_t n)
{

    int result = 0;

    while (n > 0)
    {
        if (n & 1)
            result++;
        n = n >> 1;
    }

    return result;
}

int main()
{
    uint32_t test = 11;
    cout << hammingWeight(test);
}