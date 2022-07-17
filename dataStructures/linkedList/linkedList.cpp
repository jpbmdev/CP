#include <iostream>
#include <typeinfo>

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

    cout << head->val << endl;
    cout << head->next << endl;
    for (int i = size - 1; i >= 1; i--)
    {
        ListNode *node = new ListNode(i, head);
        cout << node->val << endl;
        cout << node->next << endl;
        head = node;
    }

    cout << "-----" << endl;

    return head;
}

int main()
{
    /*CREATE LINKED LIST*/

    ListNode *head = createLinkedList(6);

    /*TRAVEL LINKED LIST*/
    while (head != NULL)
    {
        cout << head->val << endl;
        head = head->next;
    }
}