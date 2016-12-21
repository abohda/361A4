#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;

float fpSin(float xk) {
	return sin(xk);
}

float fpCos(float xk) {
	return cos(xk);
}

float fpTan(float xk) {
	return tan(xk);
}

float chordCubeRoot2(float xk) {
	return xk - (xk * xk * xk - 2) / 12;
}

float q4(float xk) {
	return 1 / sqrt(xk);
}

//int main() {
//	float xk = 2;
//
//	for (int i = 0; i < 100; i++) {
//		/*if ((i + 1) % 1000 == 0) */cout << "iteration " << i << ": " << "xk = " << xk << endl;
//		//xk = fpSin(xk);
//		//xk = chordCubeRoot2(xk);
//		//xk = fpCos(xk);
//		//xk = fpTan(xk);
//		xk = q4(xk);
//	}
//}