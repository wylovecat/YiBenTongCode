#include <iostream>
#include <cmath>//sqrt(x)�����x��ֵ pow(x,y) ��x^y
#include <cstdio> 
using namespace std;
int main()
{
	double xa,ya,xb,yb;
	cin>>xa>>ya>>xb>>yb;
	printf("%.3f",sqrt(pow(xa-xb,2)+pow(ya-yb,2)));
	return 0;
}
