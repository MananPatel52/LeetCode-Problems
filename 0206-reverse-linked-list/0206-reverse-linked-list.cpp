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

    // ListNode* reverseUsingRecursion(ListNode* prev, ListNode* curr){
    //     if(curr == NULL){
    //         return prev;
    //     }
    //     ListNode* nextNode = curr->next;
    //     curr->next = prev;

    //     ListNode* recursionKaAns = reverseUsingRecursion(curr, nextNode);
    //     return recursionKaAns;
    // }
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* curr = head;

        while(curr!=NULL){
            ListNode* nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
        }
        return prev;

    } 
};























//  ListNode* prev = NULL;
//         ListNode* curr = head;
//         // return reverseUsingRecursion(prev, curr);
//         while(curr != NULL){

//             ListNode* nextNode = curr->next;

//             curr->next = prev;
//             prev = curr;
//             curr = nextNode;
//         }
//         return prev;