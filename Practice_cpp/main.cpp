#include "leetcode.h"
#include "exam.h"

int main() {
	leetcode l;
	exam e;
	// vector<int> a = new vector<int>(3);
	// 区别 c# 的定义方式
	/*
	int a[] = { 1, 1, 2 };
	vector<int> b(a, a + 3);
	int n = l.removeDuplicates(b);
	cout << n << endl;
	for (int i = 0; i < n; i++)
		cout << b[i] << " ";
	cout << endl;
	/**/
	/*
	int a[] = { 1, 1, 1, 2, 2, 3 };
	vector<int> b(a, a + 6);
	int n = l.removeDuplicates2(b);
	cout << n << endl;
	for (int i = 0; i < n; i++)
		cout << b[i] << " ";
	cout << endl;
	/**/

	/*
	int a[] = { 1 , 100, 300, 2, 3, 500, 5, 4, 130 };
	vector<int> nums(a, a+9);
	cout << l.LongestConsecutive(nums) << endl;
	/**/

	/*
	int a[] = { 2, 7, 11, 15 };
	vector<int> nums(a, a + 4);
	vector<int> re = l.twoSum(nums, 9);
	cout << re[0] << " " << re[1] << endl;
	/**/

	/*
	int a[] = { -1, 0, 1, 2, -1, -4 };
	vector<int> nums(a, a + 6);
	vector<vector<int>> re = l.threeSum(nums);
	for (int i = 0; i < (int)re.size(); i++) {
		cout << re[i][0] << " " << re[i][1] << " " << re[i][2] << endl;
	}
	/**/

	/*
	//int a[] = { -1, 2, 1, -4 };
	int a[] = { 0, 2, 1, -3 };

	vector<int> nums(a, a + 4);
	int re = l.threeSumClosest(nums, 1, 2);
	cout << re << endl;
	/**/

	/*
	int a[] = { 1, 0, -1, 0, -2, 2 };
	vector<int> nums(a, a+6);
	vector<vector<int>> re = l.fourSum(nums, 0);
	for (int i = 0; i < (int)re.size(); i++) {
		cout << re[i][0] << " " << re[i][1] << " " << re[i][2] << " " << re[i][3] << endl;
	}
	/**/
	
	/*
	e.huawei_test_add();
	/**/
	/*
	int a[] = { 3, 0, 1, 2 };
	e.huawei_test_sort(a, 4);
	cout << a[0] << " " << a[1] << " " << a[2] << " " << a[3] << " ";
	/**/

	/*
	e.reverse();
	/**/
	/*
	string a;
	cin >> a;
	cout << stoi(a);
	/**/

	/*
	// -7X^4+5X^6-3X^3+3X^3+1X^0
	e.decode();

	/**/

	/**/
	// e.bettle();
	// e.ski();
	/**/

	//e.tuofeng();
	//e.min_int();

	/*
	int a[] = { 3,2,2,3 };
	vector<int> n(a, a+4);
	int b = l.removeElement(n, 3);
	cout << b << endl;
	for (int i = 0; i < b; i++)
		cout << n[i];
	cout << endl;
	/**/

	/**/
	int a[] = { 0, 1, 0, 3, 12 };
	vector<int> n(a, a + 5);
	l.moveZeroes(n);
	for (int i = 0; i < (int)n.size(); i++)
		cout << n[i] << " ";
	cout << endl;
	/**/

	//system("PAUSE");
	// 将 [链接器] - [系统] - [子系统] 修改为 “控制台”，使用 Ctrl + F5 进行调试即可。
	return 0;
}