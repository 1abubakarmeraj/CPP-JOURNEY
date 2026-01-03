#include <iostream>
using namespace std;
int main(){
	int inp;
	cout<<"Enter Fixed Size Of An Array: ";
	cin>>inp;
	int arr[inp];

	cout<<"Enter Elements Of An Array: ";
	for(int i = 0;i<inp;i++){
		cin>>arr[i];
	}
		int max = arr[0];
	int min = arr[0];
	for(int i = 0;i<inp;i++){
		if(arr[i]>max){
			max = arr[i];
		}
	
	}
		cout<<"Maximum: "<<max<<endl;
	for(int i = 0;i<inp;i++){
		if(arr[i]<min){
			min = arr[i];
		}
		
	}
	cout<<"Minimum: "<<min;
}
