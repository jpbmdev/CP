#include <iostream>
#include <string>
#include <vector>        //push_back pop_back
#include <unordered_map> //count erase
#include <unordered_set> //count erase
#include <algorithm>     //sort reverse
#include <tuple>         //first second
#include <queue>         //push pop back size empty
#include <stack>         //push pop top size empty

using namespace std;

int countPrimes(int n)
{

    if (n <= 1)
        return false;

    vector<bool> isPrime(n + 1, true);
    int counter = 0;

    for (int i = 2; i < n; i++)
    {
        if (isPrime[i])
        {
            counter++;
            for (int j = i + i; j < n; j = j + i)
            {
                isPrime[j] = false;
            }
        }
        else
        {
            continue;
        }
    }

    return counter;
}

int main()
{
    cout << countPrimes(10);
}