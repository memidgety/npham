//: C16:fibonacci.cpp {O}
// From Thinking in C++, 2nd Edition
// Available at http://www.BruceEckel.com
// (c) Bruce Eckel 2000
// Copyright notice in Copyright.txt
#include "require.h"

//int fibonacci(int n) {
//	const int sz = 100;
//	require(n < sz);
//	static int f[sz]; // Initialized to zero
//	f[0] = f[1] = 1;
//	// Scan for unfilled array elements:
//	int i;
//	for (i = 0; i < sz; i++)
//		if (f[i] == 0) break;
//	while (i <= n) {
//		f[i] = f[i - 1] + f[i - 2];
//		i++;
//	}
//	return f[n];
//} ///:~

/*
template <class T, T n>
class Fibonacci {
	const int sz = 100;
	require(T n < sz);
	static T f[sz]; // Initialized to zero
	f[0] = f[1] = 1; // sets 1, 1, .... in fibonacci

	T fibonacci(T n) {
		for (int i; i = 0; i < sz; i++)
			if (f[i] == 0) break;
		while (i <= n) {
			f[i] = f[i - 1] + f[i - 2];
			i++;
		}
		return f[T n];
	}
};
*/

template <class T, T n>
class Fibonacci {
	static const T sz = 100;

	static T f[sz]; // Initialized to zero

template <class T, T n>
T Fibonacci<T, n>::fibonacci (T n){
	require(T n < sz);
	f[0] = f[1] = 1; // sets 1, 1, .... in fibonacci
	for (int i; i = 0; i < sz; i++)
		if (f[i] == 0) break;
	while (i <= n) {
		f[i] = f[i - 1] + f[i - 2];
		i++;
	}
		return f[T n];
	}
};