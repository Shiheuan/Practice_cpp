#pragma once
#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <algorithm>
#include <cmath>
#include <stack>
#include <gtest/gtest.h>
#include <string>

using namespace std;

class leetcode
{
public:
	/******
	 * #26
	 * Given a sorted array nums, remove the duplicates in-place such that each element appear only once and return the new length. 
	 * Do not allocate extra space for another array, you must do this by modifying the input array in-place with O(1) extra memory.
	 * Given nums = [1,1,2], 
	 * Your function should return length = 2, with the first two elements of nums being 1 and 2 respectively.
	 */
	int removeDuplicates(vector<int>& nums);
	/******
	 * #80
	 * Given a sorted array nums, remove the duplicates in-place such that duplicates appeared at most twice and return the new length.
	 * Do not allocate extra space for another array, you must do this by modifying the input array in-place with O(1) extra memory.
	 * Given nums = [1,1,1,2,2,3],
	 * Your function should return length = 5, with the first five elements of nums being 1, 1, 2, 2 and 3 respectively.
	 */
	int removeDuplicates2(vector<int>& nums);
	/******
	 * # 128
	 * Given an unsorted array of integers, find the length of the longest consecutive elements sequence.
	 * Your algorithm should run in O(n) complexity.
	 * Input: [100, 4, 200, 1, 3, 2]
	 * Output: 4
	 * Explanation: The longest consecutive elements sequence is [1, 2, 3, 4]. Therefore its length is 4.
	 */
	int LongestConsecutive(vector<int>& nums);
	/******
	 * #1
	 * Given an array of integers, return indices of the two numbers such that they add up to a specific target.
	 * You may assume that each input would have exactly one solution, and you may not use the same element twice.
	 * Given nums = [2, 7, 11, 15], target = 9,
	 * Because nums[0] + nums[1] = 2 + 7 = 9,
	 * return [0, 1].
	 */
	vector<int> twoSum(vector<int>& nums, int target);
	/******
	 * #15
	 * Given an array nums of n integers, are there elements a, b, c in nums such that a + b + c = 0? Find all unique triplets in the array which gives the sum of zero.
	 * Notes: The solution set must not contain duplicate triplets.
	 * Given array nums = [-1, 0, 1, 2, -1, -4],
	 * A solution set is:
	 * [
	 *	 [-1, 0, 1],
	 *   [-1, -1, 2]
	 * ]
	 */
	vector<vector<int>> threeSum(vector<int>& nums);
	/******
	 * #16
	 * Given an array nums of n integers and an integer target, find three integers in nums such that the sum is closest to target. 
	 * Return the sum of the three integers. You may assume that each input would have exactly one solution.
	 * Given array nums = [-1, 2, 1, -4], and target = 1.
	 * The sum that is closest to the target is 2. (-1 + 2 + 1 = 2).
	 */
	int threeSumClosest(vector<int>& nums, int target, int method);
	/******
	 * #18
	 * Given an array nums of n integers and an integer target, are there elements a, b, c, and d in nums such that a + b + c + d = target? 
	 * Find all unique quadruplets in the array which gives the sum of target.
	 * Given array nums = [1, 0, -1, 0, -2, 2], and target = 0.
	 *	A solution set is:
	 *	[
	 *	  [-1,  0, 0, 1],
	 *	  [-2, -1, 1, 2],
	 *	  [-2,  0, 0, 2]
	 *	]
	 */
	vector<vector<int>> fourSum(vector<int>& nums, int target);
	/* #27
	 * Given an array nums and a value val, remove all instances of that value in-place and return the new length.
	 * Do not allocate extra space for another array, you must do this by modifying the input array in-place with O(1) extra memory.
	 * The order of elements can be changed. It doesn't matter what you leave beyond the new length.
	 * [3, 2, 2, 3], 3  -> 2, [2, 2]
	 */
	int removeElement(vector<int>& nums, int val);
	/* #283
	 * Given an array nums, write a function to move all 0's to the end of it while maintaining the relative order of the non-zero elements.
	 * [0, 1, 0, 3, 12] -> [1, 3, 12, 0, 0]
	 */
	void moveZeroes(vector<int>& nums);
	/* #32
	 * Given a string containing just the characters '(' and ')', find the length of the longest valid (well-formed) parentheses substring.
	 * "(()" -> 2  ")()())" -> 4
	 */
	int longestValidParentheses(string s);
	// test googletest
	int Foo(int a, int b);
	/* #31
	 * Implement next permutation, which rearranges numbers into the lexicographically next greater permutation of numbers.
	 */
	void nextPermutation(vector<int>& nums);
	/* #60
	 * The set [1,2,3,...,n] contains a total of n! unique permutations.
	 * By listing and labeling all of the permutations in order, we get the following sequence for n = 3:
	 * 1."123" 2."132" 3."213" ...
	 * Given n and k, return the kth permutation sequence.
	 */
	string getPermutation(int n, int k);
	/* #47
	 * Given a collection of distinct integers, return all possible permutations.
	 * Input: [1,2,3]
	 * Output:
	 * [[1,2,3],
	 *	[1,3,2],
	 *	[2,1,3],
	 *	[2,3,1],
	 *	[3,1,2],
	 *	[3,2,1]]
	 */
	vector<vector<int>> permute(vector<int>& nums);
private:
	void PermuteDfs(vector<int>& line, vector<int>& nums, vector<bool>& checked, vector<vector<int>>& ans);
public:
};
