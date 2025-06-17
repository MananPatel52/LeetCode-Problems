class Solution {
public:
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* temp = head;

        while(temp && temp -> next) {
            int x= gcd(temp->val, temp->next->val);
            ListNode* newnode = new ListNode(x);
            newnode->next = temp->next;
            temp->next = newnode;
            temp = temp->next->next;
        }
        return head;
    }
};