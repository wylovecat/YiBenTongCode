#include <iostream>

using namespace std;
/*
 
*/
int main()
{
	int n,sum=0,a;
	cin>>n;
	for(int i=1;i<=n;i++){
		//����i��
		//�ۼ�
		a=1;
		for(int j=1;j<=i;j++){
			a*=j;
		}
		sum+=a;
	}
	cout<<sum;
	return 0;
}
