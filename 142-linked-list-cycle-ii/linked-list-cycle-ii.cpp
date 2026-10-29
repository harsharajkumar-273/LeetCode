/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        std::unordered_set<ListNode*>set;
        ListNode* curr = head;
        while(curr!=nullptr){
            if(set.contains(curr))return curr;
            set.insert(curr);
            curr = curr->next;
        }
        return nullptr;
    }
};