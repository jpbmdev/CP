#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>

using namespace std;

void solution(vector<int> &nums, int k)
{
    // K can be greater than the size of the array
    int transformedK = k % nums.size();

    int beginingPointer = 0;
    int endPointer = nums.size() - 1;

    while (beginingPointer < endPointer)
    {
        swap(nums[beginingPointer], nums[endPointer]);
        beginingPointer++;
        endPointer--;
    }

    beginingPointer = 0;
    endPointer = transformedK - 1;

    while (beginingPointer < endPointer)
    {
        swap(nums[beginingPointer], nums[endPointer]);
        beginingPointer++;
        endPointer--;
    }

    beginingPointer = transformedK;
    endPointer = nums.size() - 1;

    while (beginingPointer < endPointer)
    {
        swap(nums[beginingPointer], nums[endPointer]);
        beginingPointer++;
        endPointer--;
    }
}

int main()
{
    vector<int> test = {-1};
    solution(test, 2);
}