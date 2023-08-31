#include "fly_carpet.h"

int fly_carpet::time (int s_) {
	s = s_;
	if (s < 1000) {
		k = 0;
	}
	else if (s >= 1000 && s < 5000) {
		k = 0.03;
	}
	else if (s >= 5000 && s < 10000) {
		k = 0.1;
	}
	else if (s >= 10000) {
		k = 0.05;
	}
	res = (int) ((s * (1 - k)) / v);
	return 0;
}
int fly_carpet::get_res() {
	return res;
}