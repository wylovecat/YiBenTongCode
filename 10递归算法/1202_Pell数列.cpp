#include <iostream>
#include <cstring>
using namespace std;

int ans[1000005];

int pell(int n){
	if(ans[n]!=-1) return ans[n];
	if(n==1) return ans[n]=1;
	if(n==2) return ans[n]=2;
	return ans[n]=(2*pell(n-1)%32767+pell(n-2))%32767;
}


int main(){
	memset(ans,-1,sizeof(ans));
	int n,x;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>x;
		cout<<pell(x)<<endl;
	}
	return 0;
}
