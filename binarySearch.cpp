#include<bits/stdc++.h>
using namespace std;

int searchRecursive(vector<int>nums,int low,int high,int key){
    if(high>=low){
        int mid=(low+high)/2;

        if(nums[mid] == key)
            return mid;
        
        else if(nums[mid]<key)
            searchRecursive(nums,low,mid-1,key);
        else    
            searchRecursive(nums,mid+1,high,key);
    }
return -1;
}

int binarySearch(vector<int>nums,int low,int high, int key){
    while(low<=high){
        int mid=(low+high)/2;

        if(key==nums[mid])
            return mid;
        
        else if(nums[mid]<key)
            low=mid+1;
        
        else if(nums[mid]>key)
            high=mid-1;
    }
return -1;
}

int main()
{
    int n; cin>>n;
    vector<int>nums;
    for(int i=0;i<n;i++){
        int data; cin>>data;
        nums.push_back(data);
    }
    int key=6;
    // cout<<binarySearch(nums,0,nums.size(),key);
    cout<<searchRecursive(nums,0,nums.size(),key);
    return 0;
}