#include <iostream>

using namespace std;
/*
1. �ܷ�19����
2. �Ƿ���k��3 
*/ 
int main()
{
	int m,k,flag=1;
	cin>>m>>k;
	if(m%19!=0)
	{
		flag=0;
	}
	// �Ƿ���k��3
	int cnt=0;
	while(m!=0){
		if(m%10 == 3){
			cnt++;
		}
		
		m/=10;
	}
	if(cnt!=k){
		flag=0;
	}
	
	if(flag==1){
		cout<<"YES";
	}else{
		cout<<"NO";
	}
	return 0;
}
