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
	/* 计算a+b的和
	 * 每行包含两个整数a和b
	 * 对于每行输入对应输出一行a和b的和
	 * 输入 1 5 输出 6
	 */
	void huawei_test_add();
	/* 长度为n的数组乱序存放着0至n - 1. 现在只能进行0与其他数的交换，完成以下函数
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