#include<bits/stdc++.h>
using namespace std;

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

void index(vector<int>nums,int target){
    int low=0;
    int high=1;
    while(target>nums[high]){
        low=high;
        high=high*2;
    }
    binarySearch(nums,low,high,target);
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
    
    cout<<index(nums,key);
    return 0;
}