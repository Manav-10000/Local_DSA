//Find unique element
#include<iostream>
#include<vector>
using namespace std;
int unique(vector<int> arr){
int ans=0; //while using XOR always initialise element form 0
for(int i=0;i<arr.size();i++){
    ans=ans^arr[i];
}
return ans;
}
int main(){
    int n;
    cout<<"Enter size of array"<<endl;
    cin>>n; 
    vector<int> arr(n);
    cout<<"Enter elements of array"<<endl;
    for(int i=0;i<arr.size();i++){
        cin>>arr[i];
    }
    int unique_element=unique(arr);
    cout<<"Unique element is: "<<unique_element<<endl;
    return 0;

}