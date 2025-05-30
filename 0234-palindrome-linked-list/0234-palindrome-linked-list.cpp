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
class Solution {
public:

    ListNode* reverseUsingRecursion(ListNode* prev, ListNode* curr){
        
        prev = NULL;

        while(curr != NULL){
            ListNode* nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
            
        }
        return prev;
    }

    ListNode* middleNode(ListNode* head){
        ListNode* temp = head;
        ListNode* slow = temp;
        ListNode* fast = temp;

        while(fast->next != NULL){
            fast = fast->next;
            if(fast->next != NULL){
                fast = fast->next;
                slow = slow->next;
            }
        }
        return slow;
    }

    bool compareList(ListNode* head1, ListNode* head2){
        while(head2 != NULL){
            if(head1->val != head2->val){
                return false;
            }
            else{
                head1 = head1->next;
                head2 = head2->next;
            }
        }
        return true;
    }

    bool isPalindrome(ListNode* head) {
        ListNode* midNode = middleNode(head);
        ListNode* head2 = midNode->next;
        midNode->next = NULL;

        ListNode* prev = NULL;
        ListNode* curr = head2;
        head2 = reverseUsingRecursion(prev, curr);

        bool ans = compareList(head, head2);
        return ans;
    }
};