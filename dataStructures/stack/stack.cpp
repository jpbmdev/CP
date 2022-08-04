#include <iostream>
#include <vector> //push_back pop_back
#include <string>
#include <unordered_map> //count erase
#include <unordered_set> //count erase
#include <algorithm>     //sort reverse
#include <tuple>         //first second
#include <queue>         //push pop back size empty
#include <stack>         //push pop top size empty

using namespace std;

int main()
{
    stack<int> st;

    st.push(1);
    st.push(2);
    st.push(3);

    cout << st.top() << endl;

    st.pop();

    cout << st.top() << endl;
}