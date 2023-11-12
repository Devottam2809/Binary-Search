#include<bits/stdc++.h>
using namespace std;

int binarySearch(vector<int>nums,int low,int high, int key){
    while(low<=high){
        int mid=(low+high)/2;

        if(key==nums[mid])
            return mid;
        
        if(mid-1>=low and key==nums[mid-1])
            return mid-1;
            
        if(mid+1<=high and key==nums[mid+1])
            return mid+1;

        else if(nums[mid]<key)
            low=mid+2;
        
        else if(nums[mid]>key)
            high=mid-2;
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
    int key=40;
    cout<<binarySearch(nums,0,n,key);
    return 0;
}