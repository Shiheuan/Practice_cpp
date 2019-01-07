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
	// 剪枝：
	// 空 或 全部小于0
	if (nums.empty() || (nums.back() < 0)) return result;
	// 在最后三个元素处终止
	for (auto i = 0; i < (int)nums.size() - 2; i++) {
		// 从小于0的元素开始，循环到大于0的元素终止
		if (nums[i] > 0) break;
		if (i > 0 && nums[i] == nums[i - 1]) continue;
		int target = 0 - nums[i];
		int j = i + 1, k = nums.size() - 1;
		while (j < k) {
			if (target == nums[j] + nums[k]) {
				result.push_back({ nums[i], nums[j], nums[k] });
				// 移除重复元素
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

int leetcode::threeSumClosest(vector<int>& nums, int target, int method) {
	int result = 0;
	int min_gap = INT_MAX;
	if (nums.size() <= 3) {
		for (int i = 0; i < (int)nums.size(); i++)
			result += nums[i];
		return result;
	}
	sort(nums.begin(), nums.end());
	if (method == 1)
	// method 1 使用index
		for (int i = 0; i < (int)nums.size() - 2; i++) {
			int j = i + 1, k = nums.size() - 1;
			while (j < k) {
				const int sum = nums[i] + nums[j] + nums[k];
				const int gap = abs(target - sum);
				if (gap < min_gap) {
					result = sum;
					min_gap = gap;
					// 不能移除重复，与上题不同，此题只有最优解，没有重复解，移除重复数据则不能覆盖所有情况
					/*while (j < k && nums[j] == nums[j + 1]) j++;
					while (j < k && nums[k] == nums[k - 1]) k--;*/
				}
				if (sum > target)
					k--;
				else
					j++;
			}
		}
	else if (method == 2)
	// method 2 使用指针 迭代器
		for (auto a = nums.begin(); a != prev(nums.end(), 2); a++) {
			auto b = next(a);
			// auto b = a + 1;
			auto c = prev(nums.end());

			while (b < c) {
				const int sum = *a + *b + *c;
				const int gap = abs(target - sum);
				if (gap < min_gap) {
					result = sum;
					min_gap = gap;
				}
				if (sum < target) ++b;
				else --c;
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

int leetcode::removeElement(vector<int>& nums, int val) {
	//int ans = 0;
	//for (int i = 0; i < (int)nums.size(); i++) {
	//	
	//	if (nums[i] != val) nums[ans++] = nums[i];;
	//}
	//return ans;
	return distance(nums.begin(), remove(nums.begin(), nums.end(), val));
}

void leetcode::moveZeroes(vector<int>& nums) {
	int ans = 0;
	for (int i = 0; i < (int)nums.size(); i++) {
		if (nums[i] != 0) nums[ans++] = nums[i];
	}
	for (int j = ans; j < (int)nums.size(); j++) {
		nums[j] = 0;
	}
}
int leetcode::longestValidParentheses(string s) {
	/*stack<int> S;
	int ans = 0, start = 0;
	for (int i = 0; i < (int)s.size(); i++) {
		if (s[i] == ')') {
			if (S.empty()) start = i + 1;
			else {
				S.pop();
				ans = S.empty() ? max(ans, i - start + 1) : max(ans, i - S.top());
			}
		}
		else if (s[i] == '(')
			S.push(i);
	}
	return ans;*/
	// DP
	// DP[i]：以s[i-1]为结尾的longest valid parentheses substring的长度
	int n = s.size();
	if (n < 2)
		return 0;
	int ans = 0;
	vector<int> dp(n + 1, 0);
	for (int i = 1; i < n + 1; i++)
	{
		int j = i - 2 - dp[i - 1];
		if (s[i - 1] == '(' || j < 0 || s[j] == ')')
			dp[i] = 0;
		else
		{
			dp[i] = dp[i - 1] + 2 + dp[j];
			ans = max(ans, dp[i]);
		}
	}
	return ans;
}

int leetcode::Foo(int a, int b)
{
	if (a == 0 || b == 0)
	{
		throw "don't do that";
	}
	int c = a % b;
	if (c == 0)
		return b;
	return Foo(b, c);
}

void leetcode::nextPermutation(vector<int>& nums) {
	int p = nums.size() - 2;
	int c = nums.size() - 1;
	while (p > -1 && nums[p] >= nums[p + 1]) p--;

	if (p == -1) {
		reverse(nums.begin(), nums.end());
		return;
	}
	while (c > 1 && nums[c] <= nums[p]) c--;
	swap(nums[p], nums[c]);
	reverse(nums.begin() + p + 1, nums.end());
	return;
}

string leetcode::getPermutation(int n, int k) {
	const int fact[] = { 1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880 };
	string ans = "";
	vector<int> nums;
	for (int i = 1; i < n + 1; i++) {
		nums.push_back(i);
	}
	int a = 0;
	int m = n;
	k = k - 1;
	for (int i = 1; i < n + 1; i++) {
		a = k / fact[n - i];
		k = k % fact[n - i];
		ans.append(to_string(nums[a]));
		nums.erase(nums.begin() + a);
	}
	return ans;
}

vector<vector<int>> leetcode::permute(vector<int>& nums) {
	vector<vector<int>> ans;
	vector<int> line;
	vector<bool> checked(nums.size(), false);
	PermuteDfs(line, nums, checked, ans);
	return ans;
}
void leetcode::PermuteDfs(vector<int>& line, vector<int>& nums, vector<bool>& checked, vector<vector<int>>& ans) {
	if (line.size() == nums.size()) {
		ans.push_back(line);
		return;
	}
	for (int i = 0; i < (int)nums.size(); i++) {
		if (checked[i] == false) {
			checked[i] = true;
			line.push_back(nums[i]);
			PermuteDfs(line, nums, checked, ans);
			checked[i] = false;
			line.pop_back();
		}
	}
}
string leetcode::convert(string s, int numRows) {
	if (s.length() == 0 || numRows <= 0) return "";
	if (numRows < 2) return s;
	string result;
	int size = 2 * numRows - 2;
	for (int i = 0; i < numRows; i++)
	{
		for (int j = i; j < s.length(); j+=size) {
			result += s[j];
			if (i != 0 && i != numRows - 1 && (j - i) + (size - i) < s.length()) {
				result += s[(j - i) + (size - i)];
			}
		}
	}
	return result;
}