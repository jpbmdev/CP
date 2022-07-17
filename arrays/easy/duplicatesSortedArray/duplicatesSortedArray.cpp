#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>

using namespace std;

int solution(vector<int> nums)
{
    int positionToUpdate = 1;
    for (int i = 0; i < nums.size() - 1; i++)
    {
        if (nums[i] != nums[i + 1])
        {
            nums[positionToUpdate++] = nums[i + 1];
        }
    }

    for (int value : nums)
    {
        cout << value;
    }
    cout << endl;

    return positionToUpdate;
}

int main()
{
    vector<int> test = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    cout << solution(test);
}