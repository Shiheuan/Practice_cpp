#include "leetcode.h"
int main() {
	leetcode l;
	// vector<int> a = new vector<int>(3);
	// ���� c# �Ķ��巽ʽ
	/*
	int a[] = { 1, 1, 2 };
	vector<int> b(a, a + 3);
	int n = l.removeDuplicates(b);
	cout << n << endl;
	for (int i = 0; i < n; i++)
		cout << b[i] << " ";
	cout << endl;
	*/
	/*
	int a[] = { 1, 1, 1, 2, 2, 3 };
	vector<int> b(a, a + 6);
	int n = l.removeDuplicates2(b);
	cout << n << endl;
	for (int i = 0; i < n; i++)
		cout << b[i] << " ";
	cout << endl;
	*/

	/*
	int a[] = { 1 , 100, 300, 2, 3, 500, 5, 4, 130 };
	vector<int> nums(a, a+9);
	cout << l.LongestConsecutive(nums) << endl;
	*/

	/*
	int a[] = { 2, 7, 11, 15 };
	vector<int> nums(a, a + 4);
	vector<int> re = l.twoSum(nums, 9);
	cout << re[0] << " " << re[1] << endl;
	*/

	/*
	int a[] = { -1, 0, 1, 2, -1, -4 };
	vector<int> nums(a, a + 6);
	vector<vector<int>> re = l.threeSum(nums);
	for (int i = 0; i < (int)re.size(); i++) {
		cout << re[i][0] << " " << re[i][1] << " " << re[i][2] << endl;
	}
	*/

	//int a[] = { -1, 2, 1, -4 };
	int a[] = { 0, 2, 1, -3 };

	vector<int> nums(a, a + 4);
	int re = l.threeSumClosest(nums, 1);
	cout << re << endl;
	//system("PAUSE");
	// �� [������] - [ϵͳ] - [��ϵͳ] �޸�Ϊ ������̨����ʹ�� Ctrl + F5 ���е��Լ��ɡ�
	return 0;
}