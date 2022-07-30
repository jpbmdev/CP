#include <iostream>
#include <vector> //push_back
#include <string>
#include <unordered_map> //count erase
#include <unordered_set> //count erase
#include <algorithm>     //sort reverse
#include <tuple>         //first second
#include <queue>         //push pop back size empty

using namespace std;

void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
{

    int tail = m + n - 1;
    m--;
    n--;

    while (n >= 0 && m >= 0)
    {
        if (nums1[m] > nums2[n])
        {
            nums1[tail] = nums1[m];
            m--;
        }
        else
        {
            nums1[tail] = nums2[n];
            n--;
        }
        tail--;
    }

    while (n >= 0)
    {
        nums1[tail] = nums2[n];
        tail--;
        n--;
    }
}

int main()
{
    vector<int> test1 = {1, 2, 3, 0, 0, 0};
    vector<int> test2 = {2, 5, 6};
    merge(test1, 3, test2, 3);

    for (int i : test1)
    {
        cout << i;
    }
}