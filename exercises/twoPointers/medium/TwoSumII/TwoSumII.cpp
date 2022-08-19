#include <iostream>
#include <string>
#include <vector>        //push_back pop_back
#include <unordered_map> //[] count erase
#include <unordered_set> //insert count erase
#include <algorithm>     //sort reverse
#include <tuple>         //first second
#include <queue>         //push pop back size empty
#include <stack>         //push pop top size empty
#include <bitset>        //bitset<32>(n).to_string()
#include <math.h>        //pow

using namespace std;

vector<int> twoSum(vector<int> &numbers, int target)
{
    int min = 0;
    int max = numbers.size() - 1;

    while (numbers[min] + numbers[max] != target)
    {
        if (numbers[max] + numbers[min] > target)
        {
            max--;
        }
        if (numbers[max] + numbers[min] < target)
        {
            min++;
        }
    }

    return {min + 1, max + 1};
}

int main()
{
    vector<int> test = {2, 5, 7, 11, 13};
    vector<int> solution = twoSum(test, 12);
    cout << solution[0];
    cout << solution[1];
}