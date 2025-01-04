//Print an array using recursion
#include<iostream>
using namespace std;
void print(int arr[], int n, int i){
//base case
if(i>=n)
return;

//first case
cout<<arr[i]<<" ";

//recursive statement
print(arr,n,i+1);

}
int main(){
int n=5;
int arr[n]={10,20,30,40,50};
int i=0;
print(arr,n,i);
}

//printing an array using iteration

//     int n=5;
//     int arr[n]={10,20,30,40,50};
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<endl;
//     }
