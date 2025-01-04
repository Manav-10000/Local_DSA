//binary search algorithm recursive way
#include<iostream>
#include<vector>
using namespace std;
int bs(vector<int>& arr, int low, int high, int target){
if(low>high)//base case
{
    return -1;
}
int mid=(low+high)/2;
if(arr[mid]==target){
    return mid;
}
else if(target>arr[mid]){
    return bs(arr,mid+1,high,target);
}
else{
    return bs(arr,low,mid-1,target);
}
}
int main(){
vector<int> arr= {3, 4, 6, 7, 9, 12, 16, 17};
int n=arr.size();
int target=6;
int low=0;
int high=n-1;
int ans=bs(arr,low,high,target);
if(ans==-1){
cout<<"target not found"<<endl;
}
else{
    cout<<"The target is present at index: "<<ans<<endl;
}
return 0;
}
