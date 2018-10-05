#pragma once
#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>

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
};