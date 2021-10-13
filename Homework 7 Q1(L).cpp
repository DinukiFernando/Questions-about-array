#include<iostream>

using namespace std;
 int main()
{
		
  	
//(L)
 	
 	int t[2][5];
	int total=0;

    for(int i = 0; i < 2; i++){
       for(int j = 0; j < 5; j++)
       {
           cout << "Enter element t " << i + 1 <<" "<< j + 1 << " : ";
           cin >> t[i][j];
       }
	}
       
    for(int i=0;i<2;i++){
 				total+=t[i][3];	
			}
 		
 	
 	cout<<total;                    
 	
    return 0;
}
