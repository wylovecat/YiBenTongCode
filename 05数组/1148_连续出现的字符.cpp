#include <iostream>
#include <cstring>
using namespace std; 

int main(int argc, char** argv) {
	int k;
	char str[2505]={0};
	int cnt=1;
	bool flag=true;
	cin>>k;
	cin>>str;
	for(int i=1;str[i]!=0;i++){
		if(str[i]==str[i-1]){
			cnt++;
		}
		if(str[i]!=str[i-1]||str[i+1]=='\0')
		{
			if(cnt>=k){
				flag=false;
				cout<<str[i-1];
				break;
			}
			cnt=1;		
		}
	}
	if(k==1){
		flag=false;
		cout<<str[0];
	}
	if(flag){
		cout<<"No";
	}
	

	
	
	return 0;
}
