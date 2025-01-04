#include<iostream>
using namespace std;
bool checkprime(int n){
    if(n<=1)
    return false;
    else{
    for(int i=2; i<=n; i++){
        if(n%i==0){
            return false;
        }
        else{
          return true;
        }
    }
    }
}
int main(){
    int n;
    cout<<"Enter a number:"<<endl;
    cin>>n;
    int prime=checkprime(n);
    cout<<"The number "<<n<<" is a prime number: "<<prime<<endl;
    return 0;
}