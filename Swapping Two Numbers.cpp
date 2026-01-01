#include <iostream>
using namespace std;
int main(){
int numb1,numb2;
cout<<"Enter First Number: ";
cin>>numb1;
cout<<"Enter Second Number: ";
cin>>numb2;
cout<<"Numbers Before Being Swapped: "<<endl;
cout<<numb1<<endl;
cout<<numb2<<endl;
numb1 = numb1+numb2;
numb2 = numb1-numb2;
numb1 = numb1-numb2;
cout<<"Numbers After Being Swapped: "<<endl;
cout<<numb1<<endl;
cout<<numb2<<endl;
}
