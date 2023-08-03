class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        for (auto it = nums.begin(); it != nums.end();)
        {
            if (val == *it)
                it = nums.erase(it);
            else
                it++;
        }
        return nums.size();
    }
};