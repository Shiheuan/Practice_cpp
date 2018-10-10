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
void exam::reverse() {
	int a;
	int r;
	cin >> a;
	string out;
	while (a != 0) {
		r = a % 10;
		a = a / 10;
		out.append(to_string(r));
	}
	for (int i = 0; i < out.size(); i++) {
		cout << out[i];
	}
	cout << endl;
}

void exam::decode() {
	// key - exp; val - coef
	map<int, int> p;
	string ps;
	int i = 0;
	int exp, coef, m_exp = 0;
	int i_x = 0, i_e = 0;
	int i_s = i;
	cin >> ps;
	if (!isdigit(ps[i]))
		i = 1;
	while (i < ps.size()) {
		while (ps[i] != 'X') i++;
		i_x = i++;
		while (i < ps.size() && ps[i] != '+' && ps[i] != '-' && ps[i] != '/0') i++;
		i_e = i;
		coef = stoi(ps.substr(i_s, i_x - i_s));
		exp = stoi(ps.substr(i_x + 2, i_e - i_x - 1));
		if (exp > m_exp) m_exp = exp;
		if (p.count(exp)) {
			p[exp] = p[exp] + coef;
		}
		else {
			p[exp] = coef;
		}
		i_s = i++;
	}
	int j = m_exp;
	bool first = true;
	while (!p.count(j) && p[j] != 0) j--;
	cout << p[j] << "X^" << j;
	while (--j >= 0){
		if (p.count(j)) {
			if (p[j] == 0) continue;
			if (p[j] > 0)
				cout << "+" << p[j] << "X^" << j;
			else
				cout << p[j] << "X^" << j;
		}
	}
}
/*
3 5 0
14 2 9 10 11
7 0 9 0 12
7 7 10 0 13
*/
void exam::bettle() {
	cin >> M >> N >> H;
	vector<int> line;
	vector<int> s;
	int h = 0;
	int max = 0;
	for (int i = 0; i < M; i++) {
		line.clear();
		s.clear();
		for (int j = 0; j < N; j++) {
			cin >> h;
			line.push_back(h);
			if (h > H)s.push_back(0);
			else s.push_back(-1);
		}
		MAP.push_back(line);
		S.push_back(s);
	}
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) {
			if (S[i][j] == -1)
				S[i][j] = is_sea(i, j) ? -1 : 0;
		}
			
	}
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) {
			dfs(i, j);
		}
	}
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) {
			max = (max < S[i][j]) ? S[i][j] : max;
		}
	}
	cout << max << endl;
	/*
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) {
			cout << S[i][j] << " ";
		}
		cout << endl;
	}
	/**/
}
bool exam::is_sea(int x, int y) {
	if (S[x][y] != -1) return false;
	else if (x == 0 || y == 0 || x == M - 1 || y == N - 1) return true;
	else {
		if (x > 0 && is_sea(x - 1, y)) return true;
		if (y > 0 && is_sea(x, y - 1)) return true;
		if (x < M-1 && is_sea(x + 1, y)) return true;
		if (y < N-1 && is_sea(x , y + 1)) return true;
	}
	return false;
}

int exam::dfs(int x, int y) {
	if (S[x][y] == 0) {
		int temp;
		int max = 0;
		if (x > 0 && MAP[x-1][y] < MAP[x][y]) {
			temp = dfs(x - 1, y);
			max = (max < temp) ? temp : max;
		}
		if (y > 0 && MAP[x][y-1] < MAP[x][y]) {
			temp = dfs(x, y - 1);
			max = (max < temp) ? temp : max;
		}
		if (x < M-1 && MAP[x+1][y] < MAP[x][y]) {
			temp = dfs(x + 1, y);
			max = (max < temp) ? temp : max;
		}
		if (y < N-1 && MAP[x][y+1] < MAP[x][y]) {
			temp = dfs(x, y + 1);
			max = (max < temp) ? temp : max;
		}
		S[x][y] = max+1;
		return S[x][y];
	}
	else if (S[x][y] == -1)
		return 0;
	else
		return S[x][y];
}

void exam::tuofeng() {
	string s;
	cin >> s;
	for (int i = 0; i < s.size() - 2; i++) {
		if (s[i] == s[i + 2])
			s[i + 1] = s[i];
	}
	cout << s << endl;
}
void exam::min_int() {
	map<int, int> m;
	string s;
	int n;
	cin >> s;
	for (int i = 0; i < s.size(); i++) {
		n = stoi(s.substr(i, 1));
		if (m.count(n)) continue;
		else m[n] = n;
	}
	for (int i = 1; i <= 9; i++)
		if (m.count(i))
			cout << m[i];
	cout << endl;
}

void exam::ski() {
	while (cin >> M >> N) {
		MAP.clear();
		S.clear();
		vector<int> line;
		vector<int> s;
		int h = 0;
		int max = 0;
		for (int i = 0; i < M; i++) {
			line.clear();
			s.clear();
			for (int j = 0; j < N; j++) {
				cin >> h;
				line.push_back(h);
				s.push_back(0);
			}
			MAP.push_back(line);
			S.push_back(s);
		}
		for (int i = 0; i < M; i++) {
			for (int j = 0; j < N; j++) {
				dfs(i, j);
			}
		}
		for (int i = 0; i < M; i++) {
			for (int j = 0; j < N; j++) {
				max = (max < S[i][j]) ? S[i][j] : max;
			}
		}
		cout << max << endl;
	}
}