//2294 dp
#include <iostream>

using namespace std;

int n,k;
int dp[10001];
int coin[101];

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	cin >> n >> k;

	for (int i = 0; i < n; i++) cin >> coin[i];
	for (int i = 1; i <= k; i++) dp[i] = 10001; 

	for (int i = 0; i < n; i++) { 
		for (int j = coin[i]; j <= k; j++) { 
			dp[j] = min(dp[j], dp[j - coin[i]] + 1);
		}
	}

	if (dp[k] == 10001) cout << -1 << '\n';
	else cout << dp[k] << '\n';
    
    return 0;
}