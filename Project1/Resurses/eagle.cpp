#include "eagle.h"

int eagles::time(int s_) {
	s = s_;
	res = static_cast<int> ((s * (1 - k)) / v);
	return 0;
}
int eagles::get_res() {
	return res;
}