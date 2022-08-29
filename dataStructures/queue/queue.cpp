#include <iostream>
#include <vector>
#include <string>
#include <unordered_map> //normal hash
#include <unordered_set> //store keys only
#include <algorithm>     //sort reverse
#include <tuple>
#include <queue>         //push pop front back size empty

using namespace std;

int main()
{
    queue<int> cola;

    cola.push(33);
    cola.push(33254);

    cout << cola.front() << endl;

    cola.pop();

    cout << cola.front() << endl;

    cout << cola.empty();
}