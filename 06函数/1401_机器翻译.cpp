#include <iostream>
#include <queue> 
using namespace std;
//1401���������� 
int m,n; 
int word;
bool vis[1005]={0};
int main(){
	queue <int> mem;
	int m,n,cnt=0;
	int h,t;
	h=t=1;
	cin>>m>>n;
	for(int i=1;i<=n;i++){
		cin>>word;
		if(!vis[word]){//��ѯ����
			//������
			cnt++;//�ⲿ��ѯ 
			//�����ڴ�
			//�жϿռ�ʹ�����
			if(mem.size()>=m){
				//�ڴ�����
				//�ڳ��ռ�
				vis[mem.front()]=false;
				mem.pop();
			} 
			mem.push(word);//�����ڴ� 
			vis[word]=true;//����ǣ���ʾ���ڴ���
		}
	}
	cout<<cnt;
	return 0;
}
