#include<bits/stdc++.h>
using namespace std;

int celing(vector<char>v,char target){
    int start=0;
    int end=v.size()-1;

    while(start<=end){

        //if we do int mid=(start+end)/2 so there might be chances that given number is not come in range of 2^32 to -2^32 so we adopt aniother method
        int mid=start + (end-start)/2;
        if(target<v[mid]){
            end=mid-1;
        }else{ 
           start=mid+1;
        }
    }
    return v[start%v.size()];
}

int main (){
    char target;
    int n;
    cin>>n;
    vector<char>v(n);
    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }
    cin>>target;
    char ans=celing(v,target);
    cout<<ans;
    return 0;
}
