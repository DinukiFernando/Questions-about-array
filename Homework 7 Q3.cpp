#include<iostream>
#include<string.h>

using namespace std;
 int main()
{	
	char s[100];
	
	cout<<"Input a line of text: ";
	cin.getline(s,100);
	cout<<endl;
	
	//Upper case 65-90
	//Lower case 97-122

	int len=strlen(s);
	
	//Turning to uppercase
	for(int i=0;i<len;i++){
		if(s[i]>=97 &&s[i]<=122){
			s[i]-=32;
		}
	}
	
	cout<<"Line of text in uppercase: "<<s<<endl;
	
	//Turning to lowercase
	for(int i=0;i<len;i++){
		if(s[i]>=60 &&s[i]<=90){
			s[i]+=32;
		}
	}
	
	cout<<"Line of text in lowercase: "<<s<<endl;

return 0;
}
