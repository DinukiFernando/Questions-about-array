#include<iostream>

using namespace std;
 int main()
{	
	int first=0;
	int economy=5;
	int choice;
	
	//array which haddles resavation of seats
	int seats[10];
	
	//assignning 0 for all seats
	for(int i=0;i<10;i++){
		seats[i]=0;
	}
		
while(first<5 || economy<10){

	cout<<"Airline Reservations System"<<endl;
	cout<<".............................."<<endl;
	cout<<"Please type 1 for [First class]"<<endl<<"Please type 2 for [Economy]"<<endl;
	cout<<"Enter the disired section: ";
	cin>>choice;
	
	while(!cin || !(choice>=1 && choice<=2)){
		cout<<"Invalid section number. Please select the desired section number: ";
		cout<<"Airline Reservations System"<<endl;
		cout<<".............................."<<endl;
		cout<<"Please type 1 for [First class]"<<endl<<"Please type 2 for [Economy]"<<endl;
		cout<<"Enter the disired section: ";
		cin.clear();
		cin.ignore();
		cin>>choice;
	}
	
	//when the passerger enter 1 for his/her choice
	if(choice==1){
		if(first<5){
			seats[first]=1;
			cout<<" The boarding pass seat number"<<endl;
			cout<<"..............................."<<endl;
			cout<<"Your seat number: "<<first+1<<endl;
			cout<<"your are in the first class !!!"<<endl;
			first++;	
		}else if(economy<10){
		
			char choice1='\0';        //null character assign for choice1
		
			while(!(choice1=='Y' ||choice1=='y' || choice1=='N' || choice1=='n')){
				cout<<"the First class section is full,  Are you OK with a seat in the economy section ?"<<endl;
				cout<<"If yes then type Y / If no then type N: ";
				cin>>choice1;
	
				if(!(choice1=='Y' ||choice1=='N' || choice1=='y' || choice1=='n')){
					cout<<"Invalid response please try again!!!"<<endl<<endl; 
				}
			}
		
cout<<endl;
		
			if(choice1=='Y' || choice1=='y'){
				cout<<" The boarding pass seat number"<<endl;
				cout<<"..............................."<<endl;
				cout<<"Your seat number: "<<economy+1<<endl;
				cout<<"your are in the economy section of the plane!!!"<<endl;
				economy++;
			
			}else if(choice1=='N' || choice1=='n'){
				cout<<"Next flight leaves in 3 hours."<<endl;
			
			}
		}
	}
cout<<endl;

	//when the passerger enter 1 for his/her choice
	 if(choice==2){
		if(economy<10){
			seats[economy]=1;
			cout<<" The boarding pass seat number"<<endl;
			cout<<"..............................."<<endl;
			cout<<"Your seat number: "<<economy+1<<endl;
			cout<<"your are in the economy section of the plane!!!"<<endl;
			economy++;	
			
		}else if(first<5){
		
		char choice2='\0';      //null character assign for choice2
		
		while(!(choice2=='Y' ||choice2=='N' || choice2=='y' || choice2=='n')){
			cout<<"the economy section is full,  Are you OK with a seat in the First class section ?"<<endl;
			cout<<"If yes then type Y / If no then type N: ";
			cin>>choice2;
			
			if(!(choice2=='Y' ||choice2=='N' || choice2=='y' || choice2=='n')){
				cout<<"Invalid response please try again!!!"<<endl; 	
			}
		}
cout<<endl;
		if(choice2=='Y' || choice2=='y'){
			cout<<" The boarding pass seat number"<<endl;
			cout<<"..............................."<<endl;
			cout<<"Your seat number: "<<first+1<<endl;
			cout<<"your are in the First class section of the plane!!!"<<endl;
			first++;
			
		}else if(choice2=='N' || choice2=='n'){
			cout<<"Next flight leaves in 3 hours."<<endl;
			
		}
	}
}

cout<<endl<<endl<<endl;

}

cout<<"************************************************"<<endl;
cout<<"All seats are full, sorry for inconvenience . "<<endl;
cout<<"Next flight leaves in 3 hours. "<<endl;
cout<<"************************************************"<<endl;
		
	return 0;
}
