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

stack<int> st;
stack<int> minStack;

void push(int val)
{
    st.push(val);
    if (minStack.empty() || val < minStack.top())
    {
        minStack.push(val);
    }
    else
    {
        minStack.push(minStack.top());
    }
}

void pop()
{
    st.pop();
    minStack.pop();
}

int top()
{
    return st.top();
}

int getMin()
{
    return minStack.top();
}

int main()
{
}