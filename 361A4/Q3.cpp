#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;

float fish(float x1k, float x2k) {
	float lambda = 2.5;
	return lambda * x1k * (1 - x1k) - 0.2 * x1k * x2k;
}

float sharks(float x1k, float x2k) {
	return 0.9 * x2k + 0.2 * x1k * x2k;
}

int main() {
	float x1k = 0.1;
	float x2k = 0.1;

	for (int i = 0; i < 1000; i++) {
		/*if ((i + 1) % 1000 == 0)*/ cout << "iteration " << i << ": " << "x1k = " << x1k << ", x2k = " << x2k << endl;
		x1k = fish(x1k, x2k);
		x2k = sharks(x1k, x2k);
	}

	return 0;
}