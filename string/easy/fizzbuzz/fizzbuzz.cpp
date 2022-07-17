#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> solution(int n)
{
    vector<string> result;
    for (int i = 1; i <= n; i++)
    {
        bool div3 = i % 3 == 0;
        bool div5 = i % 5 == 0;

        string holder = "";

        if (div3)
        {
            holder += "Fizz";
        }
        if (div5)
        {
            holder += "Buzz";
        }
        if (holder.empty())
        {
            holder += to_string(i);
        }

        result.push_back(holder);
    }
    return result;
}

int main()
{
    int n = 3;

    vector<string> result = solution(3);

    for (string val : result)
    {
        cout << val;
    }
}