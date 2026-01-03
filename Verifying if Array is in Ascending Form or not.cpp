#include <iostream>
using namespace std;
int main(){
	int inp;
	cout<<"Enter Fixed Size Of An Array: ";
	cin>>inp;
	int arr[inp];
	cout<<"Enter Elements Of An Array:";
	for(int i = 0;i<inp;i++){
		cin>>arr[i];
	}
	bool issort = true;
	for(int i = 0;i<inp-1;i++){
		if(arr[i]>arr[i+1]){
			issort = false;
			break;
		}
	}
	if(issort == true){
		cout<<"It is in Ascending Form";
	}
	else{
		cout<<"Not In Ascending Form";
	}
}
