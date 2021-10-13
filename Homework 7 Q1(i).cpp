#include<iostream>

using namespace std;
 int main()
{

 //(i) 
   int t[2][5];
 
 for(int i = 0; i < 2; i++){
 	 
     for(int j = 0; j < 5; j++)
        {
           cout << "Enter element t " << i + 1 <<" "<< j + 1 << " : ";
            cin >> t[i][j];
        }
 	}
        
       for(int i=0;i<2;i++){
 		for(int j=0;j<5;j++){
			cout<<" | "<<t[i][j]<<" | ";
 		}
 		cout<<endl;
}





    return 0;
}
