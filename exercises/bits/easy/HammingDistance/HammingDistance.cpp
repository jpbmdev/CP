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

int hammingDistance(int x, int y)
{
    int xo = x ^ y;
    int counter = 0;

    while (xo > 0)
    {
        if (xo & 1)
            counter++;
        xo >>= 1;
    }

    return counter;
};

int main()
{
    cout << hammingDistance(1, 4);
}