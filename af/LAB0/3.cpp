#include <iostream>
#include <fstream>
#include<stdlib.h>
#include <cmath>
using namespace std;
ifstream fin("1.in");
ofstream fout("1.out");
int main()
{
	fout << "n," << "100*log(n)," << "10*n," << "n*log(n)," << "0.1*n^2," << "0.01*n^3" << endl;
	for (float  i = 100; i <= 10000; i += 100) {
		fout << i << "," << log2f(i)*100 << "," << 10 * i << "," << i * log2f(i) << "," << 0.1 * i * i << "," << 0.01*i*i*i << endl; 
	}
}
