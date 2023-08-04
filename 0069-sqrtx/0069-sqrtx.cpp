class Solution {
public:
    int mySqrt(int x) {
        if (x == 1) return 1;
        int left = 0;
        int right = x;
        int temp = 0;
        while(true)
        {
            if (left + 1 == right) 
                return left;
            temp = (left + right) / 2;
            if (((long long)temp * temp) == x)
            {
                return temp;
            }
            else if ((long long)temp * temp > x)
            {
                right = temp;
            }
            else
            {
                left = temp;
            }
        }
        return 0;
    }
};