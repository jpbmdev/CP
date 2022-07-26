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
    ListNode *head = new ListNode(1);
    ListNode *curr = head;

    for (int i = 2; i <= size; i++)
    {
        ListNode *temp = new ListNode(i);
        curr->next = temp;
        curr = temp;
    }

    return head;
}

int main()
{
    /*CREATE LINKED LIST*/

    ListNode *head = createLinkedList(6);

    /*TRAVEL LINKED LIST*/
    while (head != NULL)
    {
        cout << head->val;
        head = head->next;
    }
}