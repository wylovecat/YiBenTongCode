#include <iostream> 
//1397�����������ʽ��ֵ 
using namespace std;


int main(int argc, char** argv) {
	int a,b,ans;
	char c;
	cin>>a>>c>>b;
	switch(c){
		case '+': ans=a+b;break;
		case '-': ans=a-b;break;
		case '*': ans=a*b;break;
		case '/': ans=a/b;break;
		case '%': ans=a%b;
	}
	cout <<ans;
	return 0;
}
