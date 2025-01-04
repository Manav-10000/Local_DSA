//find max elemenet in an array
#include<iostream>
#include<limits.h>
using namespace std;
void findmax(int arr[], int n, int i, int& maxi){
//base case
if(i>=n)
return;
//solving one case
if(arr[i]>maxi){
    maxi=arr[i];
}
//recursive relation
findmax(arr,n,i+1,maxi);
}
int main(){
int n=8;
int arr[n]={10,30,21,44,32,16,19,66};
int i=0;
int maxi=INT_MIN;
findmax(arr,n,i,maxi);
cout<<"maximum number is: "<<maxi<<endl;
return 0;
}