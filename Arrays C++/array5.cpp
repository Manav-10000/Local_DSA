//Print extremes of an array
//i.e, if input=10,20,30,40,50,60,70
//ans or output should be 10,70,20,60,30,50,40
#include<iostream>
using namespace std;
int main(){
    int arr[]={10,20,30,40,50,60,70};
    int size=7;
    int start=0;
    int end=size-1;
    while(true){
        if (start>end)
        break;
        if (start==end)
        {
            cout<<arr[start]<<" ";
        }
        else
        {
            cout<<arr[start]<<" ";
            cout<<arr[end]<<" ";
            
        }
        start++;
        end--;
        
    }
    
}