//1912 dp
#include<iostream>

using namespace std;

int n;
int dp[100001];
int arr[100001];
int max_sum;

int main(){
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    dp[0] = arr[0];
    max_sum = arr[0];

    for(int i = 1; i < n; i++){
        dp[i] = max(arr[i], arr[i] + dp[i - 1]);  //다 풀어 놓고 못 헤매고 있었음 집중해야 함
        max_sum = max(max_sum, dp[i]);
    }

    cout << max_sum;
    
    return 0;
}