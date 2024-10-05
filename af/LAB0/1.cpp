#include <iostream>
#include <fstream>
#include<stdlib.h>
#include <cmath>
using namespace std;
ifstream fin("1.in");
ofstream fout("1.out");
const int MAX_SIZE = 10000;
int v[MAX_SIZE], n;
int main()
{
    fin >> n;
    for (int i = 0; i < n; i++)
        fin >> v[i];
    for (int i = 0; i < n; i++)
        fout << v[i] << " ";
}
