#include <cstdio>
#include <algorithm>

using namespace std;

int arr[1001];
int dp[1001];

int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;++i) scanf("%d",arr+i);

    int ans = 0;
    for(int i=0;i<n;++i){
        dp[i] = 1;
        for(int j=0;j<i;++j){
            if(arr[i] > arr[j]) dp[i] = max(dp[i],dp[j]+1);
        }
        ans = max(ans,dp[i]);
    }
    printf("%d\n",ans);
}
