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
		// �������������ظ��Ϸ��������indexʼ��ָ���һ���ظ���λ��
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
	/* ��ʼ������
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
	// ��֦��
	// �� �� ȫ��С��0
	if (nums.empty() || (nums.back() < 0)) return result;
	// ���������Ԫ�ش���ֹ
	for (auto i = 0; i < (int)nums.size() - 2; i++) {
		// ��С��0��Ԫ�ؿ�ʼ��ѭ��������0��Ԫ����ֹ
		if (nums[i] > 0) break;
		if (i > 0 && nums[i] == nums[i - 1]) continue;
		int target = 0 - nums[i];
		int j = i + 1, k = nums.size() - 1;
		while (j < k) {
			if (target == nums[j] + nums[k]) {
				result.push_back({ nums[i], nums[j], nums[k] });
				// �Ƴ��ظ�Ԫ��
				while (j < k && nums[j] == nums[j + 1]) j++;
				while (j < k && nums[k] == nums[k - 1]) k--;
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

int leetcode::threeSumClosest(vector<int>& nums, int target) {
	int result = 0;
	int min_gap = INT_MAX;
	if (nums.size() <= 3) {
		for (int i = 0; i < (int)nums.size(); i++)
			result += nums[i];
		return result;
	}
	sort(nums.begin(), nums.end());
	for (int i = 0; i < (int)nums.size() - 2; i++) {
		int j = i + 1, k = nums.size() - 1;
		while (j < k) {
			const int sum = nums[i] + nums[j] + nums[k];
			const int gap = abs(target - sum);
			if (gap < min_gap) {
				result = sum;
				min_gap = gap;
				// �����Ƴ��ظ��������ⲻͬ������ֻ�����Ž⣬û���ظ��⣬�Ƴ��ظ��������ܸ����������
				/*while (j < k && nums[j] == nums[j + 1]) j++;
				while (j < k && nums[k] == nums[k - 1]) k--;*/
			}
			if (sum > target)
				k--;
			else
				j++;
		}
	}
	return result;
}

vector<vector<int>> leetcode::fourSum(vector<int>& nums, int target) {
	vector<vector<int>> result;
	sort(nums.begin(), nums.end());
	if (nums.size() < 4) return result;
	for (int i = 0; i < (int)nums.size() - 3; i++) {
		if (i > 0 && nums[i] == nums[i - 1]) continue;
		for (int j = i + 1; j < (int)nums.size() - 2; j++) {
			if (j > i + 1 && nums[j] == nums[j - 1]) continue;
			int k = j + 1, l = nums.size() - 1;
			while (k < l) {
				const int sum = nums[i] + nums[j] + nums[k] + nums[l];
				if (target == sum) {
					result.push_back({ nums[i], nums[j], nums[k], nums[l] });
					while (k < l && nums[k] == nums[k + 1]) k++;
					while (k < l && nums[l] == nums[l - 1]) l--;
					k++;
					l--;
				}
				else if (sum > target)
					l--;
				else
					k++;
			}
		}
	}
	return result;
}