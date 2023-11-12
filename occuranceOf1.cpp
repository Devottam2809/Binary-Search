#include<bits/stdc++.h>
using namespace std;

int firstOccurance(vector<int>nums,int low,int high, int key){
    int res=-1;
    while(low<=high){
        int mid=(low+high)/2;

        if(key==nums[mid]){
            res=mid;
            high=mid-1;
        }
        
        else if(nums[mid]<key)
            low=mid+1;
        
        else if(nums[mid]>key)
            high=mid-1;
    }
return res;
}

int index(vector<int>nums,int target){
    int low=0;
    int high=1;
    while(key>nums[high]){
        low=high;
        high=high*2;
    }
    firstOccurance(nums,low,high,target);
}

int main()
{
    vector<int> nums = {3, 4, 5, 7, 7, 7, 7, 9};
    index(nums,7);

    return 0;
}