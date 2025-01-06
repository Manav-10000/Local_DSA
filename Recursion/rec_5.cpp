// input a number(eg:647) and print all digits of this number using recursion
#include<iostream>
using namespace std;
void printdigits(int n){
//base case
if(n==0)
return;

//recursive call
printdigits(n/10);

//solve 1 case
int digit=n%10;
cout<<digit<< " ";
}
int main(){
int n=647;
if(n==0){
    cout<<"0"<<endl;
}
printdigits(n);
return 0;
}