// 19: https://leetcode.com/problems/remove-nth-node-from-end-of-list/?envType=problem-list-v2&envId=linked-list

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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL||head->next==NULL)
            return NULL;
        else{
            int total=0;
            ListNode *nav, *prev;
            nav = head;
            while(nav!=NULL){
                nav=nav->next;
                total++;
            }
            if(total-n<0)
                return head;
            else if(total-n==0)
                return head->next;
            nav=head;
            for(int i=0;i<total-n;i++){
                prev=nav;
                nav=nav->next;
            }
            prev->next=nav->next;

            return head;
        }
    }
};