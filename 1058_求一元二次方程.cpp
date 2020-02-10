#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
const double p=1e-12;
int main()
{
	double a,b,c,del,x1,x2;
	cin>>a>>b>>c;
	
	del=b*b-4*a*c;
	if(del<0&&fabs(del)>p)
		cout<<"No answer!";
	else if(fabs(del)<p)
	{
		printf("x1=x2=%.5lf",(-b)/(2*a));
	}else{
		x1=(-b+sqrt(del))/(2*a);
		x2=(-b-sqrt(del))/(2*a);
		
		if(fabs(x1)<(1e-6)) x1=0;
		if(fabs(x2)<(1e-6)) x2=0;
		
		if(x1>x2){
			double tmp=x1;
			x1=x2;
			x2=tmp; 
		}
		printf("x1=%.5lf;x2=%.5lf",x1,x2);
	}
	
	
	return 0;
}
