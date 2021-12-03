#include<bits/stdc++.h>
using namespace std;

int binarySearch(vector<int>v,int target){
    int start=0;
    int end=v.size()-1;

    //find Weather a array is sorted in ascending or desending 
    
    bool isAsc =v[start]<v[end];
    while(start<=end){

        //if we do int mid=(start+end)/2 so there might be chances that given number is not come in range of 2^32 to -2^32 so we adopt aniother method
        int mid=start + (end-start)/2;

        if(v[mid]==target){
            return mid;
        }


        if(isAsc){
            if(target<v[mid]){
               end=mid-1;
            }else{
               start=mid+1;
            }
        }else{
            if(target>v[mid]){
               end=mid-1;
            }else{
               start=mid+1;
            }
        }
    }
    return -1;//here -1 means no element found 
}

int main (){
    int target,n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }
    cin>>target;
    int ans=binarySearch(v,target);
    cout<<ans;
    return 0;
}
