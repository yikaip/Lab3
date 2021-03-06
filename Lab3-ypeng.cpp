// Lab3-ypeng.cpp 
// Yikai Peng

#include "stdafx.h"
#include<iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
	//256 makes an overflow in short
	short n, val = 0;
	cin >> n;
	for (short i = 1; i <= n; i++)
	{
		val += i;
	}
	cout << "The sum from 1 to " << n << " is " << val << endl;
	
	//21474836647 makes an overflow in long
	long z, val1 = 0;
	cin >> z;
	for (long i = 1; i <= z; i++)
	{
		val1 += i;
	}
	cout << "The sum from 1 to " << z << " is " << val1 << endl;

	//34 makes an overflow 
	long m; float val2 = 1;
	cin >> m;
	for (long x = 1; x <= m; x++)
	{
		val2 *= x;
	}
	cout << "The product from 1 to " << m << " is " << val2 << endl;

	//171 makes an overflow
	long k; double val3 = 1;
	cin >> k;
	for (long g = 1; g <= k; g++)
	{
		val3 *= g;
	}
	cout << "The product from 1 to " << k << " is " << val3 << endl;

	//Compute the sum by computing and storing the ratio 1/n and then adding up n copies of the ratio.  
	//What is the expected value of this function if the computations are exact?  
	//Check your expectation with the lab assistant.Try the computation with different values of n and experiment with float and double as the data types to store the ratio (1/n) and the result. 
	//Explain the results.

	//about 9 digits number makes it overflow
	float b; float val5 = 0.0;
	cin >> b;
	for (float d = 0; d < b; d++)
	{
		val5 += (1.0 / b);
	}

	val5 -= 1.0;
	cout << "The sum of ratio 1/" << b << " is " << val5 << endl;

	//about 14 digits number makes it overflow
	double a; double val4 = 0.0;
	cin >> a;
	for (double c = 0; c < a; c++)
	{
		val4 += (1.0 / a);
	}
	val4 -= 1.0;
	cout << "The sum of ratio 1/" << a << " is " << val4 << endl; 

	//7
	for (float i = 3.4; i < 4.4; i += 0.2) 
	{
		cout << "i = " << i << endl; 
	}
	//the numerical error occurs when i = 4.4; since the i is less then 4.4, this number should not be occured; it happens because i is a floating point, this is less precise

	cout << "\n";
	for (double i = 3.4; i < 4.4; i += 0.2)
	{
		cout << "i = " << i << endl;
	}
	//change i to double makes the result accurate
}

