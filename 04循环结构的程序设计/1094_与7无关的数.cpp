#include <iostream>
using namespace std;
//true false
// if(  ) 
int main()
{
	int n,sum=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		// �ж�i�Ƿ��7�й�
		//1. ����
		//2. ʮ������7
		int tmp=i;
		bool flag=true;
		if(tmp%7==0){
			flag=false;
		}
		
		while(tmp!=0){
			if(7==(tmp%10)){
				flag=false;
				break;
			}
			tmp/=10;
		}
		
		if(flag){
			sum+=(i*i);
		}

	}
	cout<<sum;
	
	return 0;
}
