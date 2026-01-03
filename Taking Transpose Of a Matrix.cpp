#include <iostream>
using namespace std;
int main(){
	int rows,cols;
	cout<<"Enter Rows: ";
	cin>>rows;
	cout<<"Enter Columns: ";
	cin>>cols;
	int arr[rows][cols];
	int transpose [cols][rows];
	cout<<"Enter Elements Of An Matrix: ";
	for(int i = 0;i<rows;i++){
		for(int j = 0;j<cols;j++){
			cin>>arr[i][j];
		}
	}
    for(int i = 0;i<rows;i++){
    	for(int j = 0;j<cols;j++){
    		transpose[j][i] = arr[i][j];
		}
	}
	cout<<"Tranpose: \n";
	for(int i = 0;i<cols;i++){
		for(int j = 0;j<rows;j++){
			cout<<transpose[i][j]<<" ";
		}
		cout<<endl;
	}
}
