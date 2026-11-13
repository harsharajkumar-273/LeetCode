class Solution {
public:
    void reorderList(ListNode* head) {
        if (head == nullptr || head->next == nullptr) {
            return;
        }

        ListNode* slow = head;
        ListNode* fast = head;

        // Step 1: Find middle
        while (fast->next != nullptr &&
               fast->next->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }

        // Step 2: Split list
        ListNode* second = slow->next;
        slow->next = nullptr;

        // Step 3: Reverse second half
        ListNode* curr = second;
        ListNode* prev = nullptr;

        while (curr != nullptr) {
            ListNode* nextnode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextnode;
        }

        second = prev;

        // Step 4: Merge halves
        ListNode* first = head;

        while (second != nullptr) {
            ListNode* temp = first->next;
            ListNode* temp2 = second->next;

            first->next = second;
            second->next = temp;

            first = temp;
            second = temp2;
        }
    }
};