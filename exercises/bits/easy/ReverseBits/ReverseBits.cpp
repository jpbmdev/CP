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

uint32_t reverseBits(uint32_t n)
{
    uint32_t result = 0;
    int k = 31;
    while (k > 0)
    {
        result |= (n & 1);
        result <<= 1;
        n >>= 1;
        k--;
    }
    return result |= (n & 1);
}

int main()
{
    cout << reverseBits(15);
}