class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";
        if (strs[0].empty()) return "";
        string prefix = strs[0];
        for (int i = 1; i != strs.size(); i ++)
        {
            if (strs[i].empty()) return "";

            for (int j = 0; j != prefix.size() && j != strs[i].size(); j++)
            {
                if (prefix[j] != strs[i][j])
                {
                    if (j == 0)
                        return "";
                    else
                    {
                        prefix = prefix.substr(0, j);
                        break;
                    }
                }
            }
            if (prefix.size() > strs[i].size())
                prefix = prefix.substr(0, strs[i].size());
        }
        return prefix;
    }
};