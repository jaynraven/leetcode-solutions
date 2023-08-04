class Solution {
public:
    string addBinary(string a, string b) {
        string res;
        int i = 0;
        int add = 0;
        while (true)
        {
            if (i + 1 > a.size() && i + 1 > b.size())
                break;
            int a_val = 0, b_val = 0;
            if (i + 1 <= a.size())
            {
                a_val = a[a.size() - 1 - i] - 48;
            }
            if (i + 1 <= b.size())
            {
                b_val = b[b.size() - 1 - i] - 48;
            }

            if (a_val + b_val + add == 0)
            {
                res.insert(res.begin(), '0');
                add = 0;
            }
            else if (a_val + b_val + add == 1)
            {
                res.insert(res.begin(), '1');
                add = 0;
            }
            else if (a_val + b_val + add == 2)
            {
                res.insert(res.begin(), '0');
                add = 1;
            }
            else if (a_val + b_val + add == 3)
            {
                res.insert(res.begin(), '1');
                add = 1;
            }
            i++;
        }
        if (add == 1)
            res.insert(res.begin(), '1');
        return res;
    }
};