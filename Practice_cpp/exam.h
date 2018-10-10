#pragma once
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <vector>
#include <cctype>
#include <algorithm>
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
	void reverse();
	void decode();
	void bettle();
	// liubeier
	void tuofeng();
	void min_int();
private:
	void swap_with_zero(int* array, int len, int n); 
	// battle
	bool is_sea(int x, int y);
	int dfs(int x, int y);
	vector<vector<int>> MAP;
	vector<vector<int>> S;
	vector<vector<int>> B;
	int M = 0, N = 0, H = 0;
};