//
// Created by xie on 18-5-14.
//

#include <iostream>
using namespace std;

struct ListNode{
    int val;
    ListNode * next;
    ListNode(int x): val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode res(0);
        ListNode *pNode = &res;
        int carry = 0;
        ListNode *b1 = l1, *b2 = l2;
        while(b1 != NULL || b2 != NULL || carry > 0){
            ListNode *temp = new ListNode(0);
            int val1 = b1 ? b1 -> val : 0;
            int val2 = b2 ? b1 -> val : 0;
            carry = (val1 + val2 + carry) / 10;
            pNode -> next = new ListNode((val1 + val2 + carry) % 10);
            pNode = pNode -> next;
            b1 = b1 ? b1 -> next: NULL;
            b2 = b2 ? b2 -> next: NULL;
        }
        return res.next;
    }
};