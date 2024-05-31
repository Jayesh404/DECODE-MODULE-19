# include<iostream>
# include<vector>
using namespace std;

// LeetCode 2302

long long scored(long long sum,int i,int j){
    if(j==0) return sum;
    return sum*(j-i+1);
}

int main(){

    vector<int> nums={2,1,4,3,5};
    long long k=10;

    int n=nums.size();
    int i=0;
    int j=0;
    long long count=0;
    long long sum=0;
    while(j<n){
        sum+=nums[j];
        while(scored(sum,i,j)>=k){
            count+=j-i;
            sum-=nums[i];
            i++;
        }
        j++;
    }
    while(i<n){
        count+=j-i;
        sum-=nums[i];
        i++;
    }

    
    cout<<count;

    return 0;
}