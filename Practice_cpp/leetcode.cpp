#include "leetcode.h"

int leetcode::removeDuplicates(vector<int>& nums) {
	if (nums.empty()) return 0;

	int index = 1;
	for (int i = 1; i < nums.size(); i++) {
		if (nums[i] != nums[index - 1])
			nums[index++] = nums[i];
	}
	return index;
}

int leetcode::removeDuplicates2(vector<int>& nums) {
	if (nums.empty()) return 0;

	int index = 1;
	int count = 0;
	for (int i = 1; i < nums.size(); i++) {
		// 不适用于两个重复合法的情况，index始终指向第一个重复的位置
		//if (nums[i] != nums[i - 2])
		//	nums[index++] = nums[i];
		if (nums[i] != nums[i - 1]) {
			nums[index++] = nums[i];
			count = 0;
		}
		else if (++count < 2) {
			nums[index++] = nums[i];
		}
	}
	return index;
}