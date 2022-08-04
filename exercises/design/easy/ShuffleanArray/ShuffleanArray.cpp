#include <iostream>
#include <vector> //push_back
#include <string>
#include <unordered_map> //count erase
#include <unordered_set> //count erase
#include <algorithm>     //sort reverse
#include <tuple>         //first second
#include <queue>         //push pop back size empty

using namespace std;

vector<int> original;
vector<int> temp;

void Solution(vector<int> &nums)
{
    original = nums;
    temp = nums;
}

vector<int> reset()
{
    return original;
}

vector<int> shuffle()
{
    int size = temp.size();

    for (int i = 0; i < size; i++)
    {
        int randPos = rand() % size;
        swap(temp[i], temp[randPos]);
    }

    return temp;
}
int main()
{
}