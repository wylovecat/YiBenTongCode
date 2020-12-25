#include <iostream>
using namespace std;
int ans[100005]={1,1};
int jw[100005];
int n;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=ans[0];j++){
			ans[j]=ans[j]*i+jw[j];
			jw[j]=0;
			
			if(ans[j]>=10){
				jw[j+1]+=ans[j]/10;
				ans[j]%=10;
				
				if(j==ans[0]) ans[0]++;
			}
		}
	}
	
	for(int i=ans[0];i>=1;i--){
		cout<<ans[i];
	}
	return 0;
}
