#pragma once
#include <iostream>
using namespace std;

class exam
{
public:
	/* ����a+b�ĺ�
	 * ÿ�а�����������a��b
	 * ����ÿ�������Ӧ���һ��a��b�ĺ�
	 * ���� 1 5 ��� 6
	 */
	void huawei_test_add();
	/* ����Ϊn��������������0��n - 1. ����ֻ�ܽ���0���������Ľ�����������º���
	 */
	void huawei_test_sort(int* array, int len);
private:
	void swap_with_zero(int* array, int len, int n);
};