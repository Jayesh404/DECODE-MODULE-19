# include<iostream>
# include<vector>
# include<climits>
using namespace std;

// LeetCode 1109

int main(){

    vector<vector<int>> a={{1,2,10},{2,3,20},{2,5,25}};
    
    int n=5;
    vector<int>res(n,0);
for(int i=0;i<a.size();i++){
res[a[i][0] - 1] += a[i][2];
if(a[i][1] < n)res[a[i][1]] -= a[i][2];
}
for(int i=1;i<n;i++){
res[i] += res[i-1];
}
for(int i=0;i<res.size();i++) cout<<res[i]<<" ";
    
    return 0;
}