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

ListNode *solution(ListNode *head, int n)
{
    ListNode *normal = head;
    ListNode *delayed = head;

    while (n > 0)
    {
        normal = normal->next;
        n--;
    }

    if (normal == NULL)
    {
        return delayed->next;
    }

    while (normal->next != NULL)
    {
        normal = normal->next;
        delayed = delayed->next;
    }

    delayed->next = delayed->next->next;

    return head;
}

int main()
{
}