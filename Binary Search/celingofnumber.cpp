//ceiling means smallest greatest number like we given a number so we need to find a number  
//which is just next larget number or equal to given number
#include<bits/stdc++.h>
using namespace std;

int celing(vector<int>v,int target){
    int start=0;
    int end=v.size()-1;

    while(start<=end){

        //if we do int mid=(start+end)/2 so there might be chances that given number is not come in range of 2^32 to -2^32 so we adopt aniother method
        int mid=start + (end-start)/2;

        if(v[mid]==target){
            return mid;
        }


        if(target<v[mid]){
            end=mid-1;
        }else{
           start=mid+1;
        }
    }
    return v[start];
}

int main (){
    int target,n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }
    cin>>target;
    int ans=celing(v,target);
    cout<<ans;
    return 0;
}
