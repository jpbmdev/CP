#include <iostream>
#include <string>
#include <vector>        //push_back pop_back
#include <unordered_map> //[] count erase
#include <unordered_set> //insert count erase
#include <algorithm>     //sort reverse max_element
#include <tuple>         //first second
#include <queue>         //push pop front back size empty
#include <stack>         //push pop top size empty
#include <bitset>        //bitset<32>(n).to_string()
#include <math.h>        //pow

using namespace std;
queue<int> requests;

void RecentCounter()
{
}

int ping(int t)
{
    requests.push(t);

    while (requests.front() < t - 3000)
    {
        requests.pop();
    }

    return requests.size();
}

int main()
{
}