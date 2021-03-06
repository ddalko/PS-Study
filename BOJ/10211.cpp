#include <cstdio>
#include <algorithm>

using namespace std;

const int INF = 1e9;

int arr[1001];
int dp[1001];

int main()
{
    int t;
    for(scanf("%d",&t);t--;){
        int n;
        scanf("%d",&n);
        for(int i=0;i<n;++i) scanf("%d",arr+i), dp[i]=0;

        int ans = -INF;
        for(int i=0;i<n;++i){
            dp[i] = max(arr[i],(i ? dp[i-1] : 0)+arr[i]);
            ans = max(dp[i],ans);
        }
        printf("%d\n",dp[n-1]);
    }
}
