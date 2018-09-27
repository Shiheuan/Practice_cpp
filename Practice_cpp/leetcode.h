#pragma once
#include <iostream>
#include <vector>

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
};