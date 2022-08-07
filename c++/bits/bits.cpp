#include <iostream>
#include <string>
#include <vector>        //push_back pop_back
#include <unordered_map> //count erase
#include <unordered_set> //count erase
#include <algorithm>     //sort reverse
#include <tuple>         //first second
#include <queue>         //push pop back size empty
#include <stack>         //push pop top size empty
#include <bitset>        //bitset<32>(n).to_string()

using namespace std;

int main()
{
    // 1001
    int test = 9;
    // 10010
    // If whe shift to left, we add a zero to the end
    test = test << 1;
    cout << test << endl;

    // 1001
    int test2 = 9;
    // 0100
    // If whe shift to right, we add a zero to the begining and renomve the last bit
    test2 = test2 >> 1;
    cout << test2 << endl;

    //Convert int to bit string

    int n = 100;
    string s1 = "";
    // Method 1:
    s1 = bitset<32>(n).to_string(); // 01100100
    cout << s1 << endl;
}