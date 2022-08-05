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

bool isPowerOfThree(int n)
{

    while (n >= 3)
    {
        if (n % 3 != 0)
            return false;
        n /= 3;
    }

    return n == 1;
}

int main()
{

    cout << isPowerOfThree(45);
}