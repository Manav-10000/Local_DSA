//union of 2 arrays
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[]={1,3,5,7,9};
    int brr[]={2,4,6,8};
    int size_a=5;
    int size_b=4;
    vector<int> ans;
    //push elements of arr in ans
    for(int i=0; i<size_a; i++){
        ans.push_back(arr[i]);
    }
     //push elements of brr in ans
    for(int i=0; i<size_b; i++){
        ans.push_back(brr[i]);
    }
    //print ans
    cout<<"ans is: "<<endl;
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<endl;
    }
}
