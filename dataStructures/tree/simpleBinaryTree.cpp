#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
#include <tuple>

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

TreeNode *createTree(int depth, int current = 1)
{
    if (depth == 0)
        return NULL;

    TreeNode *node = new TreeNode(current);

    depth--;
    current++;
    node->left = createTree(depth, current);
    node->right = createTree(depth, current);

    return node;
}

void printTree(TreeNode *tree)
{
    if (tree == NULL)
    {
        return;
    }
    cout << tree->val;
    printTree(tree->left);
    printTree(tree->right);
}

int main()
{
    TreeNode *tree = createTree(3);
    printTree(tree);
}