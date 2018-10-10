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
	// huawei 2018 exam
	/* 
	 * 输入一个整型数，反转这个整型数
	 */
	void reverse();
	/*
	 * 输入一个多项式，形式如“-7X^6+6X^5-3X^2+3X^2+7X^0”，简化多项式并输出
	 * 多项式以指数从大到小排列
	 * 输入项数不定，系数和小于65535
	 */
	void decode();
	/* 一座岛，地图为 M*N，保存有海拔信息。地平线海拔为 H，高于地平线为地面，低于地平线为海洋并且与边界相连为海洋，否则为陆地。
	 * 需要在陆地上建一座机场，要求跑到最长（与滑雪题相同）
	 * 输出最长跑道长度。
	 */
	void bettle();
	/*NowCoder喜欢滑雪，因为滑雪的确很刺激。为了获得速度，必须从高处往低处滑。现在知道某片区域的海拔，如下所示
	 * 1  2  3  4 5
	 * 16 17 18 19 6
	 * 15 24 25 20 7
	 * 14 23 22 21 8
	 * 13 12 11 10 9
	 * 可以从某个点滑向上下左右四个方向中海拔比当前位置低的点。例如上图中一条可行的滑坡为24 - 17 - 16 - 1。当然25 - 24 - 23 - ... - 3 - 2 - 1是最长的一条。
	 * 现在给出区域的海拔，你能帮忙计算最长的滑道有多长吗？
	 * 输入包含多组数据。每组数据的第一行包含两个正整数m和n(1≤m, n≤100)，紧接着是m*n的海拔矩阵，包含各个点的高度h(1≤h≤10000)。*/
	void ski();
	// liubeier
	/* 字符串中，如果有两个一样的字符，保住一个其他字符的情况，即为驼峰。aBa，aba
	 * 输入 abcDceddFdeee 输出 abccceddddeee
	 */
	void tuofeng();
	/* 一个只包含1-9的数字字符串，输出包含所有数字的最小整数
	 * 输入：1992212 输出：129
	 */
	void min_int();
private:
	// huawei_test_sort 成员函数
	void swap_with_zero(int* array, int len, int n); 
	// huawei_test_sort 成员函数 end
	// battle及ski成员
	bool is_sea(int x, int y);
	int dfs(int x, int y);
	vector<vector<int>> MAP;
	vector<vector<int>> S;
	int M = 0, N = 0, H = 0;
	// battle及ski成员 end
};