#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
        int t[2][5];

        for(int i=0; i<2; i++){
        	for(int j=0; j<5; j++){
				cout<<"Enter "<<i+1<<" row "<<j+1<<" column : ";
                    cin>>t[i][j];
                }
        }
        
        cout<<"\n Two Dimensional Array is : \n";
        cout<<setw(2)<<"rows "<<setw(25)<<"columns"<<endl;
        cout<<"======================================="<<endl;
        
        for(int i=0; i<2; i++){
            for(int j=0; j<5; j++){
                cout<<setw(2)<<" "<<t[i][j]<<setw(5)<<" ";
            }
                cout<<"\n";
        }
        return 0;
}

