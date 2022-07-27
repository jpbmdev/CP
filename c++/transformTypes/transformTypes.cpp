#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
#include <tuple>

using namespace std;

int main()
{
    // Char to int (no ASCII)
    char a = '1';
    int b = a - '0';
    cout << b;

    cout << endl;

    // String to int
    string c = "-123";
    b = stoi(c);
    cout << b;

    cout << endl;

    // int to string
    int d = -123;
    string e = to_string(d);
    cout << e;

    cout << endl;
}