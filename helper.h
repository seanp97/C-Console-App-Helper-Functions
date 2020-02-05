#include <iostream>
#include<string>
using namespace std;

int min(int x, int y) {
	if (x < y) {
		return x;
	}
	else
	{
		return y;
	}
}

int max(int x, int y) {
	if (x > y) {
		return x;
	}
	else
	{
		return y;
	}
}

int addition(int x, int y) {
	return x + y;
}

int subtraction(int x, int y) {
	return x - y;
}

int multiplication(int x, int y) {
	return x * y;
}

int division(int x, int y) {
	if (x > 0 && y > 0) {
		return x * y;
	}
}

int squared(int x) {
	return x * x;
}