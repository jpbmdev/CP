#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode *createLinkedList(int size)
{
    ListNode *tail = new ListNode(size);
    ListNode *head = tail;
    for (int i = size - 1; i >= 1; i--)
    {
        ListNode *node = new ListNode(i, head);
        head = node;
    }
    return head;
}

ListNode *solution(ListNode *head)
{
    ListNode *slow = head;
    ListNode *fast = head;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;
}

int main()
{
    ListNode *head = createLinkedList(6);
    ListNode *result = solution(head);
    cout << result->val;
}