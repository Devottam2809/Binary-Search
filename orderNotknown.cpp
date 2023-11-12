#include<bits/stdc++.h>
using namespace std;

bool checkOrder(vector<int>nums,int n){
    if(n==1)
        return true;
    else if(nums[0]<nums[1])
        return true;
return false;
}
int binarySearchrev(vector<int>nums,int low,int high,int key){
    while(low<=high){
        int mid=(low+high)/2;
        
        if(key==nums[mid])
            return mid;
        else if(nums[mid]>key)
            low=mid+1;
        else
            high=mid-1;
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
    int n;  cin>>n;
    vector<int>nums;
    for(int i=0;i<n;i++){
        int data;   cin>>data;
        nums.push_back(data);
    }
    int key=5;
    if(checkOrder(nums,nums.size()))
        cout<<binarySearch(nums,0,nums.size(),key);
    else
        cout<<binarySearchrev(nums,0,nums.size(),key);
    return 0;
}