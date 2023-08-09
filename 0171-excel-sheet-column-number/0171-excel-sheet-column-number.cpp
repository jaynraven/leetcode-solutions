class Solution {
public:
    int titleToNumber(string columnTitle) {
        int res = 0;
        for (int i = 0; i != columnTitle.size(); i++) {
            if (i == columnTitle.size() - 1)
                res += columnTitle[i] - 0x40;
            else
                res += (columnTitle[i] - 0x40) * pow(26, columnTitle.size() - 1 - i);
        }
        return res;  
    }
};