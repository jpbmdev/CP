#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>

using namespace std;

bool solution(vector<int> &nums)
{
    unordered_map<int, bool> storedValues;

    for (int value : nums)
    {
        if (storedValues.count(value))
            return true;

        storedValues[value] = true;
    }
    return false;
}

int main()
{
    vector<int> test = {1, 1, 1, 3, 3, 4, 3, 2, 4, 2};
    cout << solution(test);
}