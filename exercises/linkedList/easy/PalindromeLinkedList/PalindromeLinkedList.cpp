#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
#include <tuple>

using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

bool isPalindrome(ListNode *head)
{
    ListNode *fast = head;
    ListNode *slow = head;
    ListNode *reverse = NULL;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    while (slow != NULL)
    {
        ListNode *next = slow->next;
        slow->next = reverse;
        reverse = slow;
        slow = next;
    }

    while (head != NULL && reverse != NULL)
    {
        if (head->val != reverse->val)
        {
            return false;
        }
        head = head->next;
        reverse = reverse->next;
    }

    return true;
}
int main()
{
}