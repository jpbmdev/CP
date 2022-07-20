#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
#include <tuple>

using namespace std;

bool solution(vector<vector<char>> &board)

{
    int rowValidator[9][9] = {0};
    int columnValidator[9][9] = {0};
    int subMatrix[9][9] = {0};

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (board[i][j] != '.')
            {
                int currNum = board[i][j] - '0' - 1;
                int sumMatrixId = (j / 3) * 3 + i / 3;
                if (rowValidator[i][currNum] || columnValidator[j][currNum] || subMatrix[sumMatrixId][currNum])
                {
                    return false;
                }
                rowValidator[i][currNum] = 1;
                columnValidator[j][currNum] = 1;
                subMatrix[sumMatrixId][currNum] = 1;
            }
        }
    }

    return true;
}

int main()
{
    vector<vector<char>> test = {
        {'5', '3', '.', '.', '7', '.', '.', '.', '.'},
        {'6', '.', '.', '1', '9', '5', '.', '.', '.'},
        {'.', '9', '8', '.', '.', '.', '.', '6', '.'},
        {'8', '.', '.', '.', '6', '.', '.', '.', '3'},
        {'4', '.', '.', '8', '.', '3', '.', '.', '1'},
        {'7', '.', '.', '.', '2', '.', '.', '.', '6'},
        {'.', '6', '.', '.', '.', '.', '2', '8', '.'},
        {'.', '.', '.', '4', '1', '9', '.', '.', '5'},
        {'.', '.', '.', '.', '8', '.', '.', '7', '9'}};
    cout << solution(test);
}