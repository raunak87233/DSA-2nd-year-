//https://leetcode.com/problems/add-two-numbers/submissions/889309440/



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
    ListNode* nodesum(ListNode*l1,ListNode*l2,int carry){
        if(!l1 && !l2 && carry==0) return NULL ;
        int a=0,b=0;
        if(l1){a=l1->val;}
        if(l2){b=l2->val;}
        int value = a+b+carry;
        ListNode* head=new ListNode (value%10);
        head->next=nodesum(l1? l1->next :NULL ,l2? l2->next :NULL ,value/10);
        return head;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        return nodesum(l1 ,l2,0);
        }
};
