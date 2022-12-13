/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {

        int num1, num2;
        int sum = 0;
        ListNode *res = new ListNode();
        ListNode *head = res;
        while (l1!= nullptr || l2 != nullptr || sum > 0)
        {
            if (l1 == nullptr)
            {
                num1 = 0;
            }
            else
            {
                num1 = l1->val;
                l1 = l1->next;
            }
            if (l2 == nullptr)
            {
                num2 = 0;
            }
            else
            {
                num2 = l2->val;
                l2 = l2->next;
            }

            sum = sum + num1 + num2;

            res->next = new ListNode(sum % 10);

            res = res->next;

            sum = sum / 10;
        }

        return head->next;
    }
};