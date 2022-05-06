#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int T,N,X,P;
	int arr[3][3];
	cin>>T;
	for(int i=0;i<T;i++)
	   for(int j=0;j<3;j++)
	     cin>>arr[i][j];
	for(int i=0;i<T;i++)
	     {
	         int j=0;
	           { if(((arr[i][j+1])*3) + ((arr[i][j+2])*-1) >=3 )
	                cout<<"PASS\n";
	             else
	                cout<<"FAIL\n";
	           }
	         
	     }
	return 0;
}
