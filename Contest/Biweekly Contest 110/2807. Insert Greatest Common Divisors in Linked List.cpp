class Solution {
public:
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode * temp=head;
        while(temp->next!=NULL)
        {
            ListNode* n=temp->next;
            int aryan=temp->val;
            int num2=temp->next->val;
            ListNode *curr= new ListNode(__gcd(aryan,num2));
            temp->next=curr;
            curr->next=n;
            temp=temp->next->next;
        }
        return head;
    }
};