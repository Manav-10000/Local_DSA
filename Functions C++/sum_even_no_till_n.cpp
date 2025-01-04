#include<iostream>
using namespace std;
int getsum(int a){
    int sum=0;
    for(int i=2; i<=a; i=i+2){
    sum=sum+i;
    }
    return sum;
}
int main(){
int n;
cout<<"Enter a number:"<<endl;
cin>>n;
cout<<"Sum of even numbers is: "<<getsum(n)<<endl;
}


