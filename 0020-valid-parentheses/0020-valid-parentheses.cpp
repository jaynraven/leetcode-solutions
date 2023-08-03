class Solution {
public:
    bool isValid(string s) {
        while(!s.empty())
        {
            int pos = s.find("()");
            if (pos != s.npos)
            {
                s.erase(pos, 2);
                continue;
            }
            pos = s.find("{}");
            if (pos != s.npos)
            {
                s.erase(pos, 2);
                continue;
            }
            pos = s.find("[]");
            if (pos != s.npos)
            {
                s.erase(pos, 2);
                continue;
            }
            return false;
        }
        return true;
    }
};