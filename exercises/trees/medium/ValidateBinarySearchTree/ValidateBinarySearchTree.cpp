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

bool trueValidation(TreeNode *root, TreeNode *min, TreeNode *max)
{
    if (root == NULL)
    {
        return true;
    }

    if (min != NULL && root->val <= min->val)
    {
        return false;
    }

    if (max != NULL && root->val >= max->val)
    {
        return false;
    }

    return trueValidation(root->left, min, root) && trueValidation(root->right, root, max);
}
bool isValidBST(TreeNode *root)
{
    return trueValidation(root, NULL, NULL);
}

int main()
{
}