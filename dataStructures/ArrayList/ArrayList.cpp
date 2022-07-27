#include <iostream>
#include <vector>
#include <string>
#include <unordered_map> //normal hash
#include <unordered_set> //store keys only
#include <algorithm>     //sort reverse
#include <tuple>
#include <queue>

using namespace std;

int main()
{
    vector<int> nums = {1, 2, 2, 3, 3, 5, 5, 4};
    sort(nums.begin(), nums.end());

    vector<int> v = {1, 2, 2, 3, 3, 5, 5, 4};
    reverse(v.begin(), v.end());
}