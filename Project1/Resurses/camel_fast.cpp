#include "camel_fast.h"

int camel_fast::time(int s) {
	double tm = 0; // ����� ����������� ��� ������
	int n = 0;// ���������� ��������� �� ������
	double tr = 0; // ��������� ����� ������
	tm = s / v;
	n = tm / t;
	(n != 1 ? (n - 1) : 0);
	for (int i = 1; i <= n; ++i) {
		if (i == 1) {
			tr += dt1;
		}
		if (i == 2) {
			tr += dt2;
		}
		if (i >= 3) {
			tr += dt;
		}
	};
	res = static_cast<int>(tr + tm);
	return 0;
}
int camel_fast::get_res() {
	return res;
}