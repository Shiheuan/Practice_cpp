#include "leetcode.h"

int leetcode::removeDuplicates(vector<int>& nums) {
	if (nums.empty()) return 0;

	int index = 1;
	for (int i = 1; i < (int)nums.size(); i++) {
		if (nums[i] != nums[index - 1])
			nums[index++] = nums[i];
	}
	return index;
}

int leetcode::removeDuplicates2(vector<int>& nums) {
	if (nums.empty()) return 0;

	int index = 1;
	int count = 0;
	for (int i = 1; i < (int)nums.size(); i++) {
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
int leetcode::LongestConsecutive(vector<int>& nums) {
	int longest = 0;
	/* 初始化方法
	unordered_set<int> m;
	for (auto i : nums) m.insert(i);
	*/
	unordered_set<int> m(nums.begin(), nums.end());
	for (auto i : nums) {	
		if (!m.count(i)) continue;
		m.erase(i);
		int prev = i - 1, next = i + 1;
		while (m.count(next)) m.erase(next++);
		while (m.count(prev)) m.erase(prev--);
		longest = max(longest, next - prev - 1);
	}
	return longest;
}