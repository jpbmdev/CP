#include <iostream>
#include <vector>
#include <string>
#include <unordered_map> //normal hash
#include <unordered_set> //store keys only
#include <algorithm>     //sort reverse
#include <tuple>
#include <queue>

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

int maxDepth(TreeNode *root)
{
    /* EZ DFS Recursive
    if(root == NULL){
        return 0;
    }
    return 1 + max(maxDepth(root->left),maxDepth(root->right));
    */

    // BFS
    int result = 0;

    if (root == NULL)
    {
        return result;
    }

    queue<TreeNode *> levelQueue;
    levelQueue.push(root);

    while (!levelQueue.empty())
    {
        int currSize = levelQueue.size();

        for (int i = 0; i < currSize; i++)
        {
            TreeNode *temp = levelQueue.front();
            levelQueue.pop();

            if (temp->left)
            {
                levelQueue.push(temp->left);
            }
            if (temp->right)
            {
                levelQueue.push(temp->right);
            }
        }

        result++;
    }

    return result;
}

int main()
{
}