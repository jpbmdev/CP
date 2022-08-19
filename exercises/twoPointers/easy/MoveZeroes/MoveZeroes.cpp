#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>

using namespace std;

void solution(vector<int> &nums)
{
    int numPointer = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] != 0)
        {
            swap(nums[i], nums[numPointer]);
            numPointer++;
        }
    }
}

int main()
{
    vector<int> test1 = {0, 0, 1};
    solution(test1);
    
    for (int value : test1)
    {
        cout << value;
    }
}