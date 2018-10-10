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
	// huawei 2018 exam
	/* 
	 * ����һ������������ת���������
	 */
	void reverse();
	/*
	 * ����һ������ʽ����ʽ�硰-7X^6+6X^5-3X^2+3X^2+7X^0�����򻯶���ʽ�����
	 * ����ʽ��ָ���Ӵ�С����
	 * ��������������ϵ����С��65535
	 */
	void decode();
	/* һ��������ͼΪ M*N�������к�����Ϣ����ƽ�ߺ���Ϊ H�����ڵ�ƽ��Ϊ���棬���ڵ�ƽ��Ϊ��������߽�����Ϊ���󣬷���Ϊ½�ء�
	 * ��Ҫ��½���Ͻ�һ��������Ҫ���ܵ�����뻬ѩ����ͬ��
	 * �����ܵ����ȡ�
	 */
	void bettle();
	/*NowCoderϲ����ѩ����Ϊ��ѩ��ȷ�ܴ̼���Ϊ�˻���ٶȣ�����Ӹߴ����ʹ���������֪��ĳƬ����ĺ��Σ�������ʾ
	 * 1  2  3  4 5
	 * 16 17 18 19 6
	 * 15 24 25 20 7
	 * 14 23 22 21 8
	 * 13 12 11 10 9
	 * ���Դ�ĳ���㻬�����������ĸ������к��αȵ�ǰλ�õ͵ĵ㡣������ͼ��һ�����еĻ���Ϊ24 - 17 - 16 - 1����Ȼ25 - 24 - 23 - ... - 3 - 2 - 1�����һ����
	 * ���ڸ�������ĺ��Σ����ܰ�æ������Ļ����ж೤��
	 * ��������������ݡ�ÿ�����ݵĵ�һ�а�������������m��n(1��m, n��100)����������m*n�ĺ��ξ��󣬰���������ĸ߶�h(1��h��10000)��*/
	void ski();
	// liubeier
	/* �ַ����У����������һ�����ַ�����סһ�������ַ����������Ϊ�շ塣aBa��aba
	 * ���� abcDceddFdeee ��� abccceddddeee
	 */
	void tuofeng();
	/* һ��ֻ����1-9�������ַ�������������������ֵ���С����
	 * ���룺1992212 �����129
	 */
	void min_int();
private:
	// huawei_test_sort ��Ա����
	void swap_with_zero(int* array, int len, int n); 
	// huawei_test_sort ��Ա���� end
	// battle��ski��Ա
	bool is_sea(int x, int y);
	int dfs(int x, int y);
	vector<vector<int>> MAP;
	vector<vector<int>> S;
	int M = 0, N = 0, H = 0;
	// battle��ski��Ա end
};