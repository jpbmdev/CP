#include <iostream>
#include <vector> //push_back
#include <string>
#include <unordered_map> //count erase
#include <unordered_set> //count erase
#include <algorithm>     //sort reverse
#include <tuple>         //first second
#include <queue>         //push pop back size empty

using namespace std;

bool isBadVersion(int test)
{
    return true;
}

int firstBadVersion(int n)
{
    int left = 1;
    int right = n;

    while (left < right)
    {
        int mid = left + ((right - left) / 2);
        if (isBadVersion(mid))
        {
            right = mid;
        }
        else
        {
            left = mid + 1;
        }
    }
    return right;
}

int main()
{
}