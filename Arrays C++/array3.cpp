//Print max no. in an array
#include<iostream>
#include<limits.h>
using namespace std;
int main(){
    int arr[8];
    int size=8;
    int maxi=INT_MIN;
    cout<<"Enter the elements of array:"<<endl;
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    for(int i=0; i<size; i++)
    {
    if(arr[i]>maxi){
        maxi=arr[i];
    }
    }
    cout<<"Maximum number is: "<<maxi<<endl;
}