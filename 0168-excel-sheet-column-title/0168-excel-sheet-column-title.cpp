class Solution {
public:
    string convertToTitle(int columnNumber) {
        string res;
        while (true) {
            if (columnNumber == 26) {
                res.insert(res.begin(), 'Z');
                break;
            }
            if (columnNumber % 26 == 0) {
                res.insert(res.begin(), 'Z');
                columnNumber -= 26;
            }
            else {
                res.insert(res.begin(), columnNumber % 26 + 0x40);
            }
            if (!(columnNumber / 26)) break;
            columnNumber = columnNumber / 26;
        }
        return res;  
    }
};