#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;
/*
1.��Сд��ת
2.���������������
3.��������λ�� 
*/
int main()
{
	char s[55]={0},s2[55]={0};
	cin>>s;
	int len=strlen(s);
	for(int i=0;i<len;i++){
		if(isupper(s[i])){
			s[i]=tolower(s[i]);//ת��Сд
			s[i]=(s[i]-'a'+3)%26+'a';//����3λ 
		}else{
			s[i]=toupper(s[i]);//ת�ɴ�д
			s[i]=(s[i]-'A'+3)%26+'A'; 
		}
	}
	for(int i=0;i<len;i++){
		s2[i]=s[len-i-1];
	}
	cout<<s2;
	
	return 0;
}

