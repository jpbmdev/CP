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

TreeNode *createTree(vector<int> &nums, int left, int right)
{
    if (left > right)
    {
        return NULL;
    }

    int mid = (left + right) / 2;
    TreeNode *newNode = new TreeNode(nums[mid]);
    newNode->left = createTree(nums, left, mid - 1);
    newNode->right = createTree(nums, mid + 1, right);

    return newNode;
}

TreeNode *sortedArrayToBST(vector<int> &nums)
{
    return createTree(nums, 0, nums.size() - 1);
}

int main()
{
}