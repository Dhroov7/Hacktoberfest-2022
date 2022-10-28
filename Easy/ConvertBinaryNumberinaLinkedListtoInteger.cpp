//1290. Convert Binary Number in a Linked List to Integer
#include<bits/stdc++.h>

 struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

class Solution {
public:
    int getDecimalValue(ListNode* head) {
        vector<int> a;
        ListNode *h=head;
        while(h!=NULL){
            a.push_back(h->val);
            h=h->next;
        }
        long int s=0;
        int j=0;
        for(int i=a.size()-1;i>=0;i--){
            s+=a[i]*pow(2,j++);
        }
        return s;
    }
};