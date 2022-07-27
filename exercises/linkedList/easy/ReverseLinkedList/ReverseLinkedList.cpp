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

ListNode *solution(ListNode *head)
{
    ListNode *curr = head;
    ListNode *prev = NULL;

    while (curr != NULL)
    {
        // TEMP;
        ListNode *next = curr->next;

        curr->next = prev;
        prev = curr;

        curr = next;
    }

    return prev;
}

int main()
{
}