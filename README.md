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
| [0004-median-of-two-sorted-arrays](https://github.com/razzgamer0007/leetcode/tree/master/0004-median-of-two-sorted-arrays) |
## Hash Table
|  |
| ------- |
| [0001-two-sum](https://github.com/razzgamer0007/leetcode/tree/master/0001-two-sum) |
| [0003-longest-substring-without-repeating-characters](https://github.com/razzgamer0007/leetcode/tree/master/0003-longest-substring-without-repeating-characters) |
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
## String
|  |
| ------- |
| [0003-longest-substring-without-repeating-characters](https://github.com/razzgamer0007/leetcode/tree/master/0003-longest-substring-without-repeating-characters) |
## Sliding Window
|  |
| ------- |
| [0003-longest-substring-without-repeating-characters](https://github.com/razzgamer0007/leetcode/tree/master/0003-longest-substring-without-repeating-characters) |
## Binary Search
|  |
| ------- |
| [0004-median-of-two-sorted-arrays](https://github.com/razzgamer0007/leetcode/tree/master/0004-median-of-two-sorted-arrays) |
## Divide and Conquer
|  |
| ------- |
| [0004-median-of-two-sorted-arrays](https://github.com/razzgamer0007/leetcode/tree/master/0004-median-of-two-sorted-arrays) |
<!---LeetCode Topics End-->