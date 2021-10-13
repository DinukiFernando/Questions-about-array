#include<iostream>
using namespace std;

int main(){
	int trip[4][4]={0,34,64,128,34,0,90,152,58,90,0,62,128,152,62,0};
	int total=0;
	int i,j;
	char a;    //Do you wish to travel further [if yes , type 'y' /  if no , type 'n']
	
	while(a!='n'){
		cout<<"*************************************"<<endl;
		cout<<"WELCOME TO THE TRIP ADVICER!!"<<endl;
		cout<<endl;
		
		cout<<"Enter 1- Kagalla"<<endl;
		cout<<"Enter 2- Kandy"<<endl;
		cout<<"Enter 3- Colombo"<<endl;
		cout<<"Enter 4- Galle"<<endl;
		
		
		cout<<endl;
		cout<<"Please enter your current location: ";
		cin>>j;
		
		while( !(j>0 && j<5)){
		cout<<"Invalid location. Please select your current location again : ";
	}
		
		cout<<endl;
		
		total+=trip[i-1][j-1];
		
		cout<<"Do you wish to travel further [if yes , type 'y' /  if no , type 'n'] : ";
		cin>>a;
		cout<<endl;
		
		if(a=='n'){
			cout<<"Total distance to be travelled is "<<total<<" km"<<endl;
		}else{
			int temp;
			int jj;
			temp=trip[i][j];
			trip[i][j]=trip[j][jj];
			trip[j][jj]=temp;
			cout<<"Please enter your destination : ";
			cin>>jj;
			
			cout<<endl;
			
			total+=trip[j-1][jj-1];
			cout<<"Total distance to be travelled is " <<total<<"km"<<endl;	
			
		}
	}
	
	
	return 0;
}
