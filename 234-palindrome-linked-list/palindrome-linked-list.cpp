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
ListNode* left;
    bool isPalindrome(ListNode* head) {
        left = head;
        return check(head);

    }
    bool check(ListNode* right){
        if(right == nullptr) return true;
        bool result = check(right->next);
        if(result == false)return false;
        if(left->val!=right->val)return false;
        left = left->next;
        return true;

    }
};