// https://leetcode.com/problems/linked-list-cycle

class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* temp = head;   
        unordered_map<ListNode*, int> nodeMap;  

        while (temp != nullptr) {
            if (nodeMap.find(temp) != nodeMap.end()) {
                return true;
            }
            nodeMap[temp] = 1;
            temp = temp->next;  
        }
        return false;
    }
};