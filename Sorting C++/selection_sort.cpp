#include<iostream>
using namespace std;
int selection_sort(int arr[],int n){
for(int i=0; i<=n-2; i++){
    int mini=i;
    for(int j=0; i<=n-1; i++){
        if(arr[j] < arr[mini]){
            mini=j;
        }
    }
    int temp=arr[mini];
    arr[mini]=arr[i];
    arr[i]=temp;
}
}

int main()
{
    int n;
    cout<<"Enter the size of array"<<endl;
    cin >> n;
    int arr[n];
    cout<<"Enter an unsorted array"<<endl;
    for(int i=0; i<=n; i++){
        cin>> arr[i];
    }
    selection_sort(arr,n);
    for(int i=0; i<=n; i++){
        cout<<"The sorted array is: "<< arr[i];
    }
    return 0;
}`