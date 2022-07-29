#include <iostream>
#include <vector>
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

bool compareSubTrees(TreeNode *left, TreeNode *right)
{
    if (left == NULL && right == NULL)
    {
        return true;
    }

    if (left != NULL && right != NULL && left->val == right->val)
    {
        return compareSubTrees(left->left, right->right) && compareSubTrees(left->right, right->left);
    }

    return false;
}

bool isSymmetric(TreeNode *root)
{
    if (root == NULL)
    {
        return true;
    }

    return compareSubTrees(root->left, root->right);
}
int main()
{
}