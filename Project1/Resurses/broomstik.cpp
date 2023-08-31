#include "broomstik.h"

int broomstick::time (int s_) {
	s = s_;
	int k1;
	k1 = s / 1000;
	k = k1 / 100;
	res = static_cast<int>((s * (1 - k)) / v);
	return 0;
}
int broomstick::get_res() {
	return res;
}