#include "centaur.h"

int centaur::time(int s) {
	double tm = 0; // ����� ����������� ��� ������
	int n = 0;// ���������� ��������� �� ������
	double tr = 0; // ��������� ����� ������
	tm = s / v;
	n = tm / t;
	(n != 1 ? (n - 1) : 0);
	for (int i = 1; i <= n; ++i) {
		tr += dt;
	};
	res = static_cast<int> (tr + tm);
	return 0;
}
int centaur::get_res() {
	return res;
}