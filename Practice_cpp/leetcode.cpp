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
		// ²»ÊÊÓÃÓÚÁ½¸öÖØ¸´ºÏ·¨µÄÇé¿ö£¬indexÊ¼ÖÕÖ¸ÏòµÚÒ»¸öÖØ¸´µÄÎ»ÖÃ
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
	/* ³õÊ¼»¯·½·¨
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

vector<int> leetcode::twoSum(vector<int>& nums, int target) {
	unordered_map<int, int> m;
	vector<int> result;
	for (auto i = 0; i < (int)nums.size(); i++) {
		int num = nums[i];
		if (m.count(target - num)) {
			int index = m[target - num];
			result.push_back(index < i ? index : i);
			result.push_back(index < i ? i : index);
			break;
		}
		else
			m[num] = i;
	}
	return result;
}

vector<vector<int>> leetcode::threeSum(vector<int>& nums) {
	vector<vector<int>> result;
	sort(nums.begin(), nums.end());
	// ï¿½ï¿½Ö¦ï¿½ï¿½
	// ï¿½ï¿½ ï¿½ï¿½ È«ï¿½ï¿½Ð¡ï¿½ï¿½0
	if (nums.empty() || (nums.back() < 0)) return result;
	// ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½Ôªï¿½Ø´ï¿½ï¿½ï¿½Ö¹
	for (auto i = 0; i < (int)nums.size() - 2; i++) {
		// ï¿½ï¿½Ð¡ï¿½ï¿½0ï¿½ï¿½Ôªï¿½Ø¿ï¿½Ê¼ï¿½ï¿½Ñ­ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½0ï¿½ï¿½Ôªï¿½ï¿½ï¿½ï¿½Ö¹
		if (nums[i] > 0) break;
		if (i > 0 && nums[i] == nums[i - 1]) continue;
		int target = 0 - nums[i];
		int j = i + 1, k = nums.size() - 1;
		while (j < k) {
			if (target == nums[j] + nums[k]) {
				result.push_back({ nums[i], nums[j], nums[k] });
				// ï¿½Æ³ï¿½ï¿½Ø¸ï¿½Ôªï¿½ï¿½
				while (i < j && nums[j] == nums[j + 1]) j++;
				while (i < j && nums[k] == nums[k - 1]) k--;
				j++;
				k--;
			}
			else if (target < nums[j] + nums[k])
				k--;
			else
				j++;
		}
	}
	return result;
}