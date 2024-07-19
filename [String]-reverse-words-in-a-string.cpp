// https://leetcode.com/problems/reverse-words-in-a-string

class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        int current = 0, left = 0, right = 0;
        reverse(s.begin(), s.end());

        while (current < n) {
            while (current < n && s[current] == ' ') {
                current++;
            }

            if (current == n) {
                break;
            }

            while (current < n && s[current] != ' ') {
                s[right++] = s[current++];
            }
            reverse(s.begin() + left, s.begin() + right);
            s[right++] = ' ';
            left = right;
            current++;
        }

        s.resize(right - 1);
        return s;
    }
};