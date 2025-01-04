#include<iostream>
using namespace std;
bool find(int arr[],int size,int key)
{
   for(int i=0;i<size;i++){
    if(arr[i]==key)
    return true;
   }
   return false;
}

int main()
{
    int arr[10]={2,3,1,4,5,7,6,8,9,10};
    int size=10;
    int key=6;
    if(find(arr,size,key)){
        cout<<"Found"<<endl;
    }
    else{
        cout<<"Not Found"<<endl;
    }
    return 0;


}