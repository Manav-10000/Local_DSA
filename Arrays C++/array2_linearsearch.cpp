//count 0's and 1's in an array using linear search
#include<iostream>
using namespace std;
int main(){
    int arr[]={0,1,1,1,0,0,0,0,1,0,1,0,1,0,1};
    int size=15;
    int countone=0;
    int countzero=0;
    for(int i=0; i<size; i++){
        if(arr[i]==0){
            countzero++;
        }
         if(arr[i]==1){
            countone++;
        }
    }
    cout<<"no of zeroes:"<<countzero<<endl;
    cout<<"no of ones:"<<countone<<endl;
}