#include"exam.h"

void exam::huawei_test_add() {
	long a, b;
	while (cin >> a >> b) {
		cout << a + b << endl;
	}
}

void exam::swap_with_zero(int* array, int len, int n) {
	int a = 0, b = 0, temp = 0;
	for (int i = 0; i < len; i++) {
		if (array[i] == 0)
			a = i;
		if (array[i] == n)
			b = i;
	}
	temp = array[a];
	array[a] = array[b];
	array[b] = temp;
}

void exam::huawei_test_sort(int* array, int len){
	for (int i = 0; i < len; i++) {
		if (array[i] == i) continue;
		swap_with_zero(array, len, array[i]);
		swap_with_zero(array, len, i);
	}
}