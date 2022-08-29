#include <iostream>
#include <string>        //substr
#include <vector>        //push_back pop_back
#include <unordered_map> //[] count erase size
#include <unordered_set> //insert count erase size
#include <algorithm>     //sort reverse max_element
#include <tuple>         //first second
#include <queue>         //push pop front back size empty
#include <stack>         //push pop top size empty
#include <bitset>        //bitset<32>(n).to_string()
#include <math.h>        //pow

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

TreeNode *invertTree(TreeNode *root)
{
    if (root == NULL)
        return NULL;

    TreeNode *temp = root->left;

    root->left = root->right;
    root->right = temp;

    invertTree(root->left);
    invertTree(root->right);

    return root;
}

int main()
{
    cout << tolower('/');
}