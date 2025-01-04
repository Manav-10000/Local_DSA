#include<iostream>
using namespace std;
int count(int n){
    for(int i=1; i<=n; i++){
        cout<<i<<" ";
    }
    cout<<endl;
}
int main()
{
int n;
cout<<"Enter the value of n ";
cin>>n;
count(n);
return 0;
}