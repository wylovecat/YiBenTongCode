#include <iostream>

using namespace std;
/*
1161£º×ª½øÖÆ

*/
int xToM(int x,int m,char s[],int cnt){
	if(x==0) return cnt;
	if(x%m>=10) s[cnt]=x%m+'A'-10;
	else s[cnt]=x%m+'0';
	return xToM(x/m,m,s,cnt+1);
}


int main(){
	char s[35]={0};
	int x,m;
	cin>>x>>m;
	int len=xToM(x,m,s,0);
	bool flag=false;
	for(int i=len-1;i>=0;i--){
		if(s[i]!='0'||i==0){
			flag=true;
		}
		if(flag){
			cout<<s[i];
		}
	}
	return 0;
}
