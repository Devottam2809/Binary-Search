#include<bits/stdc++.h>
using namespace std;

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
    int key=13;
    cout<<binarySearch(nums,0,nums.size(),key);
    return 0;
}