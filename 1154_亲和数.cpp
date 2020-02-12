#include <iostream>
using namespace std;
int factSum(int num)
{// 求num的因子和 
	int sum=0;
	for(int i=1;i<num;i++)
	{
		if(num%i==0) sum+=i;
	}
	return sum;
}

int  main() {

	for(int a=2;;a++)
	{
		int b=factSum(a);
		if(a==factSum(b) && a!=b)
		{
			cout<<a<<" "<<b;
			break;
		}
	}
	return 0;
}
