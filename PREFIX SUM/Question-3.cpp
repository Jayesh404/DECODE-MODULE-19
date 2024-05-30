# include<iostream>
# include<vector>
# include<climits>
using namespace std;

// LeetCode 2640

int main(){

    vector<int> nums={2,3,7,5,10};
    int n=nums.size();
        vector<long long> ans(n);
        vector<int> conver(n);
        int maxi=INT_MIN;
        for(int i=0;i<n;i++){
            conver[i]=nums[i]+max(maxi,nums[i]);
            maxi=max(maxi,nums[i]);
        }
        vector<long long> score(n);
        score[0]=conver[0];
        for(int i=1;i<n;i++){
            score[i]=score[i-1]+conver[i];
        }
        for(int i=0;i<n;i++){
            ans[i]=score[i];
        }
        for(int i=0;i<ans.size();i++) cout<<ans[i]<<" ";
    
    return 0;
}