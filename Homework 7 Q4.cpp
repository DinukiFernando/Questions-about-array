#include<iostream>
#include<string.h>

using namespace std;
 int main()
{	
	char s1[100],s2[100];
	
	//input value for string 1
	cout<<"Input first sting: ";
	cin.getline(s1,100);
	
	//input value for string 1
	cout<<"Input first sting: ";
	cin.getline(s1,100);
	
	//comparing 2 strings using 'strcmp'
	int compare=strcmp(s1,s2);
	
	cout<<compare;
	
	if(compare==0){
		cout<<"Strings are equal"<<endl;
	}else if(compare==1){
		cout<<"String 1 is greater than string 2"<<endl;
	}else if(compare==-1){
		cout<<"String 1 is less than string 2  "<<endl;
	}

return 0;
}
