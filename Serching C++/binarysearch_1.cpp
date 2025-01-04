//interative of binary search algorithm
#include<iostream>
#include<vector>
using namespace std;

int binarysearch(vector<int>& nums, int target){
int n=nums.size();
int low=0;
int high=n-1;
while(low<=high){
int mid=(low+high)/2;
if(nums[mid]==target)
{
    return mid;
}
else if(target>nums[mid]){
    low=mid+1;
}
else{
high=mid-1;
}
}
return -1;
}
int main(){
vector<int> nums{3,10,20,40,50,70,80,90};
int target=40;
int ans=binarysearch(nums,target);
if(ans==-1){
    cout<<"target not found"<<endl;
}
else{
    cout<<"The target is at index: "<<ans<<endl;
}
return 0;
}










//z
