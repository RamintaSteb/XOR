// ConsoleApplication4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <windows.h>

using namespace std;
int main()
{
	unsigned int a, b, c, c1, c2;
	cin >> a;
	cin >> b;
	c1 = (a | b)&~(a&b);
	c = a ^ b;
	c2 = ~(~(~(a & b) & a) & ~(b & ~(a & b)));
	cout << a << " " << b << " naudoti kintmieji" << endl;
	cout << c1 << " 1 dalies rezultatas" << endl;
	cout << c2 << " 2 dalies rezultatas" << endl;
	cout << c << " iprasta xor operacija" << endl;
	system("PAUSE");
	return 0;
}

