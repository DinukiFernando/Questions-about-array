#include<iostream>

using namespace std;
 int main()
{
	

//(j)
 int t[2][5];

for(int i = 0; i < 2; i++){
	 
       for(int j = 0; j < 5; j++)
       {
           cout << "Enter element t " << i + 1 <<" "<< j + 1 << " : ";
           cin >> t[i][j];
       }
	}
       
    int min=t[0][0];
    int temp;
    
    for(int i = 0; i < 2; i++){
       for(int j = 0; j < 5; j++){
	   if(t[i][j]<=min){
	   	min=t[i][j];
	}
   }
}
    cout<<min;
                                          
    

    return 0;
}
