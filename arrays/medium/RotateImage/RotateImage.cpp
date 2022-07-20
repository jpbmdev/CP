#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
#include <tuple>

using namespace std;

void solution(vector<vector<int>> &matrix)
{
    int matrixBegin = 0;
    int matrixEnd = matrix[0].size() - 1;
    int counter1 = matrixBegin;
    int counter2 = matrixEnd;

    while (matrixBegin < matrix[0].size() / 2)
    {
        while (counter1 < matrixEnd)
        {
            swap(matrix[matrixBegin][counter1], matrix[counter1][matrixEnd]);
            swap(matrix[matrixBegin][counter1], matrix[matrixEnd][counter2]);
            swap(matrix[matrixBegin][counter1], matrix[counter2][matrixBegin]);
            counter1++;
            counter2--;
        }
        matrixBegin++;
        matrixEnd--;
        counter1 = matrixBegin;
        counter2 = matrixEnd;
    }
}

int main()
{
    vector<vector<int>> test = {{1, 2, 3},
                                {4, 5, 6},
                                {7, 8, 9}};

    solution(test);
    for (int i = 0; i < test.size(); i++)
    {
        for (int j = 0; j < test.size(); j++)
        {
            cout << test[i][j];
        }
        cout << endl;
    }
}