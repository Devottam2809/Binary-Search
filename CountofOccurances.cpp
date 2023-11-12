#include<bits/stdc++.h>
using namespace std;

int lastOccurance(vector<int>nums,int low,int high, int key){
    int res=-1;
    while(low<=high){
        int mid=(low+high)/2;

        if(key==nums[mid]){
            res=mid;
            low=mid+1;
        }
        
        else if(nums[mid]<key)
            low=mid+1;
        
        else if(nums[mid]>key)
            high=mid-1;
    }
return res;
}

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

int main()
{
    vector<int> nums = {3, 4, 5, 7, 7, 7, 7,7, 9};
    cout<<abs(firstOccurance(nums,0,nums.size(),7)-lastOccurance(nums,0,nums.size(),7))+1;
    return 0;
}