#include<bits/stdc++.h>
using namespace std;

int position(vector<int>nums,int target){
    int start=0;
    int end=nums.size()-1;
    vector<int>ans={-1,-1};
    while(start<=end){

        //if we do int mid=(start+end)/2 so there might be chances that given number is not come in range of 2^32 to -2^32 so we adopt aniother method
        int mid=start + (end-start)/2;

        if(target<nums[mid]){
            end=mid-1; 
        }else if(target>nums[mid]){ 
           start=mid+1;
        }else{
            return mid;
        }
    }
    return -1;
}
//

int main (){
    char target;
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }
    cin>>target;
    int ans=position(v,target);
    cout<<ans;
    return 0;
}
