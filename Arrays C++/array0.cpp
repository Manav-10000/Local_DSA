//Take 5 input in an array and print their double
#include<iostream>
using namespace std;
int main()
{
  int arr[5];
  cout<<"Enter the elements in array"<<endl;
  for(int i=0; i<5; i++)
  {
  cin>>arr[i];
  }  
  cout<<"Print double of each element of array:"<<endl;
  for(int i=0; i<5; i++)
  {
    cout<<2*arr[i]<<endl;
  }
  return 0;
}