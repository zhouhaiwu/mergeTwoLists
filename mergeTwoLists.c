#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2){
    if (l1==NULL) return l2;
    if (l2==NULL) return l1;
    if(l1->val < l2->val)
    {
        l1->next=mergeTwoLists(l1->next,l2);//求出一个小的都要将去掉这个小的l1和整l2作比较
        return l1;
    }else{
        l2->next=mergeTwoLists(l2->next,l1);
        return l2;
    }
}