#include <iostream>
#include <fstream>
#include<stdlib.h>
#include <cmath>
using namespace std;
ifstream fin("1.in");
ofstream fout("1.out");
int n, minim, maxim;
int main()
{
	cin >> n >> minim >> maxim;
	for (int i = 0; i < n; i++) {
		fout << minim + rand() % (maxim - minim + 1) << " ";
	}
}
