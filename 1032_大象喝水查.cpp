#include <iostream>
#include <cmath>//ceil(x)����ȡ�� 
using namespace std;
const double PI =3.14;
int main()
{
	int h,r;
	cin>>h>>r;
	cout<<ceil(20*1000/(h*PI*r*r));
	return 0;
}
