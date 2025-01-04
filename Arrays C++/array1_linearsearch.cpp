//linear search 6 in an array[]={2,9,6,7,4,12,15}
#include<iostream>
using namespace std;
bool find(int arr[], int size, int key ){
    //linear search
    for(int i=0; i<size; i++){
        if(arr[i]==key)
        return true;
    }
    return false;
}
int main(){
int size=7;
int arr[7];
int key;
cout<<"Enter the elements of array:"<<endl;
for(int i=0; i<7; i++){
    cin>>arr[i];
}
cout<<"Enter the key:"<<endl;
cin>>key;
if(find(arr,size,key))
{
    cout<<"Key found"<<endl;
}
else{
    cout<<"Key not found"<<endl;
}
return 0;
}