//31738 dp
#include<iostream>

using namespace std;

long long dp[10000000];
long long n, m;

int main(){
    cin >> n >> m;

    dp[1] = 1;

    for(int i = 2; i < 10000000; i++){
        dp[i] = (i * dp[i - 1]) % m;
    }

    if(n >= m){
        cout << 0;
    }
    else{
        cout << dp[n];
    }

    return 0;
}