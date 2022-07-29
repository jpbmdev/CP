#include <iostream>
#include <vector> //push_back
#include <string>
#include <unordered_map> //count erase
#include <unordered_set> //count erase
#include <algorithm>     //sort reverse
#include <tuple>         //first second
#include <queue>         //push pop back size empty

using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

vector<vector<int>> levelOrder(TreeNode *root)
{
    vector<vector<int>> result;
    queue<TreeNode *> levelQueue;

    if (root == NULL)
    {
        return result;
    }

    levelQueue.push(root);

    while (!levelQueue.empty())
    {
        int currSize = levelQueue.size();
        vector<int> tempArray;

        for (int i = 0; i < currSize; i++)
        {
            TreeNode *temp = levelQueue.front();
            levelQueue.pop();
            tempArray.push_back(temp->val);

            if (temp->left)
            {
                levelQueue.push(temp->left);
            }
            if (temp->right)
            {
                levelQueue.push(temp->right);
            }
        }
        result.push_back(tempArray);
    }

    return result;
}
int main()
{
}