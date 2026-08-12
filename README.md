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
| [0014-longest-common-prefix](https://github.com/razzgamer0007/leetcode/tree/master/0014-longest-common-prefix) |
| [0026-remove-duplicates-from-sorted-array](https://github.com/razzgamer0007/leetcode/tree/master/0026-remove-duplicates-from-sorted-array) |
| [0027-remove-element](https://github.com/razzgamer0007/leetcode/tree/master/0027-remove-element) |
## Hash Table
|  |
| ------- |
| [0001-two-sum](https://github.com/razzgamer0007/leetcode/tree/master/0001-two-sum) |
| [0003-longest-substring-without-repeating-characters](https://github.com/razzgamer0007/leetcode/tree/master/0003-longest-substring-without-repeating-characters) |
| [0013-roman-to-integer](https://github.com/razzgamer0007/leetcode/tree/master/0013-roman-to-integer) |
## Linked List
|  |
| ------- |
| [0002-add-two-numbers](https://github.com/razzgamer0007/leetcode/tree/master/0002-add-two-numbers) |
| [0021-merge-two-sorted-lists](https://github.com/razzgamer0007/leetcode/tree/master/0021-merge-two-sorted-lists) |
## Math
|  |
| ------- |
| [0002-add-two-numbers](https://github.com/razzgamer0007/leetcode/tree/master/0002-add-two-numbers) |
| [0007-reverse-integer](https://github.com/razzgamer0007/leetcode/tree/master/0007-reverse-integer) |
| [0009-palindrome-number](https://github.com/razzgamer0007/leetcode/tree/master/0009-palindrome-number) |
| [0013-roman-to-integer](https://github.com/razzgamer0007/leetcode/tree/master/0013-roman-to-integer) |
## Recursion
|  |
| ------- |
| [0002-add-two-numbers](https://github.com/razzgamer0007/leetcode/tree/master/0002-add-two-numbers) |
| [0021-merge-two-sorted-lists](https://github.com/razzgamer0007/leetcode/tree/master/0021-merge-two-sorted-lists) |
## String
|  |
| ------- |
| [0003-longest-substring-without-repeating-characters](https://github.com/razzgamer0007/leetcode/tree/master/0003-longest-substring-without-repeating-characters) |
| [0005-longest-palindromic-substring](https://github.com/razzgamer0007/leetcode/tree/master/0005-longest-palindromic-substring) |
| [0006-zigzag-conversion](https://github.com/razzgamer0007/leetcode/tree/master/0006-zigzag-conversion) |
| [0013-roman-to-integer](https://github.com/razzgamer0007/leetcode/tree/master/0013-roman-to-integer) |
| [0014-longest-common-prefix](https://github.com/razzgamer0007/leetcode/tree/master/0014-longest-common-prefix) |
| [0020-valid-parentheses](https://github.com/razzgamer0007/leetcode/tree/master/0020-valid-parentheses) |
| [0028-find-the-index-of-the-first-occurrence-in-a-string](https://github.com/razzgamer0007/leetcode/tree/master/0028-find-the-index-of-the-first-occurrence-in-a-string) |
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
## Two Pointers
|  |
| ------- |
| [0005-longest-palindromic-substring](https://github.com/razzgamer0007/leetcode/tree/master/0005-longest-palindromic-substring) |
| [0026-remove-duplicates-from-sorted-array](https://github.com/razzgamer0007/leetcode/tree/master/0026-remove-duplicates-from-sorted-array) |
| [0027-remove-element](https://github.com/razzgamer0007/leetcode/tree/master/0027-remove-element) |
| [0028-find-the-index-of-the-first-occurrence-in-a-string](https://github.com/razzgamer0007/leetcode/tree/master/0028-find-the-index-of-the-first-occurrence-in-a-string) |
## Dynamic Programming
|  |
| ------- |
| [0005-longest-palindromic-substring](https://github.com/razzgamer0007/leetcode/tree/master/0005-longest-palindromic-substring) |
## Trie
|  |
| ------- |
| [0014-longest-common-prefix](https://github.com/razzgamer0007/leetcode/tree/master/0014-longest-common-prefix) |
## Stack
|  |
| ------- |
| [0020-valid-parentheses](https://github.com/razzgamer0007/leetcode/tree/master/0020-valid-parentheses) |
## Bracket Sequences
|  |
| ------- |
| [0020-valid-parentheses](https://github.com/razzgamer0007/leetcode/tree/master/0020-valid-parentheses) |
## String Matching
|  |
| ------- |
| [0028-find-the-index-of-the-first-occurrence-in-a-string](https://github.com/razzgamer0007/leetcode/tree/master/0028-find-the-index-of-the-first-occurrence-in-a-string) |
## Z Algorithm
|  |
| ------- |
| [0028-find-the-index-of-the-first-occurrence-in-a-string](https://github.com/razzgamer0007/leetcode/tree/master/0028-find-the-index-of-the-first-occurrence-in-a-string) |
## KnuthÃ¢ÂÂMorrisÃ¢ÂÂPratt Algorithm
|  |
| ------- |
| [0028-find-the-index-of-the-first-occurrence-in-a-string](https://github.com/razzgamer0007/leetcode/tree/master/0028-find-the-index-of-the-first-occurrence-in-a-string) |
## BoyerÃ¢ÂÂMoore String-Search Algorithm
|  |
| ------- |
| [0028-find-the-index-of-the-first-occurrence-in-a-string](https://github.com/razzgamer0007/leetcode/tree/master/0028-find-the-index-of-the-first-occurrence-in-a-string) |
## KnuthâMorrisâPratt Algorithm
|  |
| ------- |
| [0028-find-the-index-of-the-first-occurrence-in-a-string](https://github.com/razzgamer0007/leetcode/tree/master/0028-find-the-index-of-the-first-occurrence-in-a-string) |
## BoyerâMoore String-Search Algorithm
|  |
| ------- |
| [0028-find-the-index-of-the-first-occurrence-in-a-string](https://github.com/razzgamer0007/leetcode/tree/master/0028-find-the-index-of-the-first-occurrence-in-a-string) |
<!---LeetCode Topics End-->