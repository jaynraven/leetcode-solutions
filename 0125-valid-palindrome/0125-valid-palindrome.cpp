class Solution {
public:
    bool isPalindrome(string s) {
        string s_remove_other;
        for (int i = 0; i != s.size(); i++)
        {
            if (s[i] >= 0x30 && s[i] <= 0x39 ||
                s[i] >= 0x61 && s[i] <= 0x7A)
            {
                s_remove_other.push_back(s[i]);
            }
            else if (s[i] >= 0x41 && s[i] <= 0x5A)
            {
                s_remove_other.push_back(s[i] + 0x20);
            }
        }

        for (int i = 0; (i + 1) * 2 <= s_remove_other.size(); i++)
        {
            if (s_remove_other[i] != s_remove_other[s_remove_other.size() - 1 - i])
                return false;
        }

        return true;
    }
};