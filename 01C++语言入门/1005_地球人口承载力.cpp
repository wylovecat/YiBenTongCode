#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int x,a,y,b;
	double z;
	cin>>x>>a>>y>>b; 
	
	/*
	�����������Դnow,ÿ������up,ÿ������down
	���ɳ�����չ 
	year*up = z*year*down
	z = up/down 
		
	now + a*up = a*x*down
	now + b*up = b*y*down
	
	��ʽ���
	
	a*up-b*up = a*x*down-b*y*down
	up(a-b) = down(ax - by)
	up/down = (ax - by)/(a-b) 
	
	*/
	z=(1.0*a*x-b*y)/(1.0*a-b);
	printf("%.2f",z);
	
	return 0;
}
