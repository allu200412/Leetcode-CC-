class Solution {
public:
    bool isPalindrome(ListNode* head) {
        vector<int> values;
        
        // Store linked-list values in an array
        while (head != nullptr) {
            values.push_back(head->val);
            head = head->next;
        }
        
        // Compare from both ends
        int left = 0;
        int right = values.size() - 1;
        
        while (left < right) {
            if (values[left] != values[right]) {
                return false;
            }
            left++;
            right--;
        }
        
        return true;
    }
};