class Solution {
public:
    bool plaindrome(int i, const vector<char>& an) {
        if (i >= an.size() / 2) {
            return true;
        }
        if (an[i] != an[an.size() - i - 1]) {
            return false;
        }
        return plaindrome(i + 1, an);
    }

    bool isPalindrome(string s) {
        vector<char> answer;
        for (int i = 0; i < s.size(); i++) {
            if ((s[i] >= 65 && s[i] <= 90) || (s[i] >= 97 && s[i] <= 122) || (s[i] >= 48 && s[i] <= 57)) {
                answer.push_back(tolower(s[i]));
            }
        }

        return plaindrome(0, answer);
    }
};
