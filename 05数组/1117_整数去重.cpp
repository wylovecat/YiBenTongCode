#include <iostream>

using namespace std;
int main()
{
	int n,x,k=0;// ���ظ��ĸ��� 
	int num[20005]={0};
	bool vis[5005]={0};//vis[x] true-x���ֹ�  false-xû���ֹ� 
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>x;
		// �ж�x��û�г��ֹ�
		if(!vis[x]){
			num[k++]=x;
//			num[k]=x;
//			k++;
			vis[x]=true;
		}
		
	}
	
	for(int i=0;i<k;i++){
		cout<<num[i]<<" ";
	}
	return 0;
}
