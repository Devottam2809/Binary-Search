#include<bits/stdc++.h>
using namespace std;

// ceil
int binarySearch(vector<int>nums,int low,int high, int key){
    int res=-1;
    while(low<=high){
        int mid=(low+high)/2;

        if(key==nums[mid])
            return mid;
        
        else if(nums[mid]<key)
            low=mid+1;
        
        else if(nums[mid]>key){
            res=mid;
            high=mid-1;
        }
    }
return res;
}

// floor
int binarySearch(vector<int>nums,int low,int high, int key){
    int res=-1;
    while(low<=high){
        int mid=(low+high)/2;

        if(key==nums[mid])
            return mid;
        
        else if(nums[mid]<key){
            res=mid;
            low=mid+1;
        }
        
        else if(nums[mid]>key)
            high=mid-1;
    }
return res;
}
int main()
{
    int n; cin>>n;
    vector<int>nums;
    for(int i=0;i<n;i++){
        int data; cin>>data;
        nums.push_back(data);
    }
    int key=7;
    // if key is present then min element is equal to the key 
    // else
    // choose min diffrence from both ceil and floor values and return it.
    return 0;
}