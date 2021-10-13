#include<iostream>

using namespace std;
 int main()
{
	  
    
//(k)

	 int t[2][5];
	 int total;

    for(int i = 0; i < 2; i++){
       for(int j = 0; j < 5; j++)
       {
          cout << "Enter element t " << i + 1 <<" "<< j + 1 << " : ";
           cin >> t[i][j];
        }
	}
       
       for(int i=0;i<5;i++){
 			cout<<" | "<<t[0][i]<<" | ";
 	    }
                                              

    return 0;
}
