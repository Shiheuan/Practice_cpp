#include "leetcode.h"
int main() {
	leetcode l;
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
	*/
	int a[] = { 1, 1, 1, 2, 2, 3 };
	vector<int> b(a, a + 6);
	int n = l.removeDuplicates2(b);
	cout << n << endl;
	for (int i = 0; i < n; i++)
		cout << b[i] << " ";
	cout << endl;

	//system("PAUSE");
	// 将 [链接器] - [系统] - [子系统] 修改为 “控制台”，使用 Ctrl + F5 进行调试即可。
	return 0;
}