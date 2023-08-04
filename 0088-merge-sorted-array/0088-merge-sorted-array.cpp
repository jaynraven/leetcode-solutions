class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int pos1 = 0;;
        for (int i = 0; i != n; ++i)
        {
            bool j_run = false;
            int j_next = 0;
            for (int j = pos1; j != m + n; j++)
            {
                if (j_run)
                {
                    auto temp = nums1[j];
                    nums1[j] = j_next;
                    j_next = temp;
                    continue;
                }
                if (nums2[i] < nums1[j])
                {
                    j_next = nums1[j];
                    nums1[j] = nums2[i];
                    j_run = true;
                    pos1 = j + 1;
                    continue;
                }
                if (j == m + i)
                {
                    nums1[j] = nums2[i];
                    break;
                }
            }
        }
    }
};