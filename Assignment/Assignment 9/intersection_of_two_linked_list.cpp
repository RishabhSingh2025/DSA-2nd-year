/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool isNodePresent(ListNode *head,ListNode *target)
    {
        while(head!=NULL)
        {
            if(head==target)
            {
                return true;
            }
            head=head->next;
        }
        return false;
    }
    ListNode *getIntersectionNode(ListNode *head1,ListNode *head2) {
        while(head2!=NULL)
        {
            if(isNodePresent(head1,head2))
            {
            return head2;
            }
            head2=head2->next;
        }
        return NULL;
    }
};
