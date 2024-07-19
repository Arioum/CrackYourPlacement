// https://leetcode.com/problems/remove-duplicates-from-sorted-list

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if (!head) {
            return nullptr;
        }

        ListNode* temp = head;
        ListNode* temp2 = head->next;
        int last = head->val;

        while (temp2 != nullptr) {
            if (temp2->val == last) {
                if (temp2->next == nullptr) {
                    temp->next = nullptr;
                    break;
                }
                temp2 = temp2->next;
                temp->next = temp2;
            } else {
                temp = temp2;
                last = temp->val;
                temp2 = temp2->next;
            }
        }

        return head;
    }
};