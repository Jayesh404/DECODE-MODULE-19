# include<iostream>
# include<vector>
using namespace std;

// LeetCode 1248



int main(){

    vector<int> a={1,1,2,1,1};
    int k=3;

    int n = a.size();
        int i = 0, j = 0, cnt = 0, ans = 0, odd = 0;
        while (j < n) {
            if (a[j] % 2 != 0) {
                cnt = 0;
                odd++;
            }
            while (i <= j and odd == k) {
                cnt++;
                if (a[i++] % 2 != 0)
                    odd--;
            }
            ans += cnt;
            j++;
        }
        return ans;

    return 0;
}