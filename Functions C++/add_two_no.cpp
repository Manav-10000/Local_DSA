#include<iostream>
using namespace std;
int add(int x,int y){
    int sum=x+y;
    return sum;
}
int main()
{
int a,b;
cout<<"Enter a number"<<endl;
cin>>a;
cout<<"Enter a number"<<endl;
cin>>b;
int sum=add(a,b);
cout<<"The sum is: "<<sum<<endl;
return 0;
}