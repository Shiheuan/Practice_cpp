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
	int a[] = { 1, 1, 1, 2, 2, 3 };
	vector<int> b(a, a + 6);
	int n = l.removeDuplicates2(b);
	cout << n << endl;
	for (int i = 0; i < n; i++)
		cout << b[i] << " ";
	cout << endl;

	//system("PAUSE");
	// �� [������] - [ϵͳ] - [��ϵͳ] �޸�Ϊ ������̨����ʹ�� Ctrl + F5 ���е��Լ��ɡ�
	return 0;
}