class Solution {
public:
    // razzgamer0007
    int searchInsert(vector<int>& nums, int target) {
        int index  = 0, flag = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] >= target) {
                index = i;
                flag = 1;
                break;
            }
        }
        if (!index && flag)
            return index;
        else if (index && flag)
            return index;
        else
            return nums.size();
    }
};