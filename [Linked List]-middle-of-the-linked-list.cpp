// https://leetcode.com/problems/middle-of-the-linked-list

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* temp = head;
        int count = 0;

        while(temp != NULL) {
            count++;
            temp = temp->next;
        }

        int mid = count / 2 + 1;
        temp = head;

        while (temp != NULL) {
            mid = mid - 1;
            if (mid == 0){
                break;
            }
            temp = temp->next;
        }
        return temp;
    }
};