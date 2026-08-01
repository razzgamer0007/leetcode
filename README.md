# leetcode
class Solution {
public:
    // razzgamer0007
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> seen; // value -> index

        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            if (seen.find(complement) != seen.end()) {
                return {seen[complement], i};
            }
            seen[nums[i]] = i;
        }

        return {}; // no solution found
    }
};

<!---LeetCode Topics Start-->
# LeetCode Topics
## Array
|  |
| ------- |
| [0001-two-sum](https://github.com/razzgamer0007/leetcode/tree/master/0001-two-sum) |
## Hash Table
|  |
| ------- |
| [0001-two-sum](https://github.com/razzgamer0007/leetcode/tree/master/0001-two-sum) |
## Linked List
|  |
| ------- |
| [0002-add-two-numbers](https://github.com/razzgamer0007/leetcode/tree/master/0002-add-two-numbers) |
## Math
|  |
| ------- |
| [0002-add-two-numbers](https://github.com/razzgamer0007/leetcode/tree/master/0002-add-two-numbers) |
## Recursion
|  |
| ------- |
| [0002-add-two-numbers](https://github.com/razzgamer0007/leetcode/tree/master/0002-add-two-numbers) |
<!---LeetCode Topics End-->