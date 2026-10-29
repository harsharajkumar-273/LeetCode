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
    bool hasCycle(ListNode *head) {
        std::unordered_set<ListNode*> set;
        ListNode* curr = head;
        while(curr!=nullptr){
            if(set.contains(curr))return true;
            else{
                set.insert(curr);
            }
            curr = curr->next;
        }
        return false;
    }
};