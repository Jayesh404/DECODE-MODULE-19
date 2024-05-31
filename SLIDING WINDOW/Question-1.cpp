# include<iostream>
# include<vector>
using namespace std;

// LeetCode 1343

int main(){

    vector<int> arr={2,2,2,2,5,5,5,8};
    int k=3;
    int threshold=4;

    int n=arr.size();
        int count=0;
        int avg=0;
        int presum=0;
        for(int i=0;i<k;i++){
            presum+=arr[i];
        }
        avg=presum/k;
        if(avg>=threshold) count++;


        int i=1;
        int j=k;
        
        while(j<n){
            int currsum=presum-arr[i-1]+arr[j];
            int curravg=currsum/k;
            if(curravg>=threshold) count++;
            presum=currsum;
            i++;
            j++;
        }
        cout<<count;

    return 0;
}