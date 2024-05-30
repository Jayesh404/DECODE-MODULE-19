# include<iostream>
# include<vector>
using namespace std;

// LeetCode 724

int main(){

    vector<int> nums={1,7,3,6,5,6};
    int n=nums.size();
    int pivot=-1;
    vector<int> pre(n,0),suff(n,0);
    pre[0]=nums[0];
    suff[n-1]=nums[n-1];
    for(int i=1;i<n;i++){
        pre[i]=pre[i-1]+nums[i];
    }
    for(int i=n-2;i>=0;i--){
        suff[i]=suff[i+1]+nums[i];
    }

    for(int i=0;i<n;i++){
        if(suff[i]==pre[i]){
            pivot=i;
             break;
        }
    }
    cout<<pivot;
    
    return 0;
}