// C++ program to demonstrate functionality of unordered_map
#include <iostream>
#include <unordered_map>
#include <unordered_set>

using namespace std;

int main()
{
    cout << "--------------------------------" << endl;
    cout << "unordered_map" << endl;
    // Declaring umap to be of <string, int> type
    // key will be of string type and mapped value will
    // be of int type
    unordered_map<string, int> umap;

    // inserting values by using [] operator
    umap["GeeksforGeeks"] = 10;
    umap["Practice"] = 20;
    umap["Contribute"] = 30;

    // Traversing an unordered map
    for (auto x : umap)
        cout << x.first << " " << x.second << endl;

    if (umap.count("GeeksforGeeks"))
        cout << "si" << endl;
    else
        cout << "no" << endl;

    umap.erase("GeeksforGeeks");

    if (umap.count("GeeksforGeeks"))
        cout << "si" << endl;
    else
        cout << "no" << endl;

    cout << "--------------------------------" << endl;
    cout << "unordered_set" << endl;
    // IF we only want to store keys we should use unordered_set
    unordered_set<int> numExists;

    numExists.insert(1);

    for (auto x : numExists)
        cout << x << endl;

    if (numExists.count(1))
        cout << "si" << endl;
    else
        cout << "no" << endl;

    if (numExists.count(2))
        cout << "si" << endl;
    else
        cout << "no" << endl;
}
