class Solution {
public:
    int lengthOfLastWord(string s) {
        unsigned pos = s.find_last_not_of(' ');
        if (pos == s.npos) return s.size();
        s = s.substr(0, pos);
        pos = s.rfind(' ');
        if (pos == s.npos) return s.size();
        return s.size() - pos;
    }
};