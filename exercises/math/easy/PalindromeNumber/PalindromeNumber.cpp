#include <iostream>
#include <string>        //substr
#include <vector>        //push_back pop_back
#include <unordered_map> //[] count erase size
#include <unordered_set> //insert count erase size
#include <algorithm>     //sort reverse max_element (.begin(), .end())
#include <tuple>         //first second
#include <queue>         //push pop front back size empty
#include <stack>         //push pop top size empty
#include <bitset>        //bitset<32>(n).to_string()
#include <math.h>        //pow
// Native                //swap min max rand tolower

using namespace std;

bool isPalindrome(int x)
{
    if (x < 0)
        return false;

    // Multiples of 10 are not palindrome so add that if, then reverse while x > rev (12421 → x=12 rev 124) return x == rev || x == rev / 10
    if (x != 0 && x % 10 == 0)
        return false;

    int reverse = 0;

    while (x > reverse)
    {
        reverse *= 10;
        reverse += x % 10;
        x /= 10;
    }

    return reverse == x || reverse / 10 == x;
}

int main()
{
    cout << isPalindrome(12321);
}