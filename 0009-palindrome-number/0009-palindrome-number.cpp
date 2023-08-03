class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) 
            return false;
        std::vector<int> nums;
        while (true)
        {
            nums.push_back(x%10);
            x = x/10;
            if (x == 0)
                break;
        }
        for (int i = 0; i != nums.size(); i++)
        {
            if (2 * i + 1 >= nums.size())
                break;
            if (nums[i] != nums[nums.size()-1-i])
                return false;
        }
        return true;
    }
};