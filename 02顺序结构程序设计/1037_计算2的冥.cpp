#include <iostream>
#include <cmath>
using namespace std;
int main()
{
//  方法1：循环累成 
//	int n,s=1;
//	cin>>n; 
//	for(int i=1;i<=n;i++)
//	{
//		s*=2;
//	}
//	cout<<s;
	int n;
	cin>>n;
	printf("%d",pow(2,n));
	
	return 0;
}
