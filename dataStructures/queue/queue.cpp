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
    queue<int> cola;

    cola.push(33);
    cola.push(33254);

    cola.pop();

    cout << cola.back() << endl;

    cout << cola.empty();
}