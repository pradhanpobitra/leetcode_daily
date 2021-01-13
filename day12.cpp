#include <bits/stdc++.h>
using namespace std;

//   Definition for singly-linked list.
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class Solution
{
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {

        ListNode *head = 0, *tail = 0;
        int carry = 0;
        int sum;
        while (l1 && l2)
        {
            sum = l1->val + l2->val + carry;
            if (head == 0)
            {
                head = new ListNode(sum % 10);
                tail = head;
            }
            else
            {
                tail->next = new ListNode(sum % 10);
                tail = tail->next;
            }
            l1 = l1->next;
            l2 = l2->next;
            carry = sum / 10;
        }
        while (l1)
        {
            sum = l1->val + carry;
            tail->next = new ListNode(sum % 10);
            tail = tail->next;
            l1 = l1->next;
            carry = sum / 10;
        }
        while (l2)
        {
            sum = l2->val + carry;
            tail->next = new ListNode(sum % 10);
            tail = tail->next;
            l2 = l2->next;
            carry = sum / 10;
        }
        if (carry)
            tail->next = new ListNode(carry);
        return head;
    }
};