#include "camel.h"

int camel::time(int s) {
	double tm = 0; // время прохождения без отдыха
	int n = 0;// количество остановок на отьдых
	double tr = 0; // суммарное время отдыха
	tm = s / v;
	n = tm / t;
	(n != 1 ? (n - 1) : 0);
	for (int i = 1; i <= n; ++i) {
		if (i == 1) {
			tr += dt1;
		}
		if (i >= 2) {
			tr += dt;
		}
	};
	res = static_cast<int> (tr + tm);
	return 0;
}
int camel::get_res() {
	return res;
}