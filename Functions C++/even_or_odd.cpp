#include<iostream>
using namespace std;
int even_odd(int n){
    if(n%2==0){
        cout<<"Even";
    }
    else{
        cout<<"Odd";
    }
}
int main(){
int n;
cout<<"Enter a number"<<endl;
cin>>n;

cout<<"The number is: ";
even_odd(n);
return 0;
}