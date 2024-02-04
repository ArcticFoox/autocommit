//16401 binarysearch
#include<iostream>
#include<algorithm>

using namespace std;

long long m, n;
long long arr[1000010];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> m >> n;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    sort(arr, arr+n);

    long long st = 1;
    long long en = arr[n - 1];
    long long ans = 0;
    
    while(st <= en){
        long long cnt = 0;
        long long mid = (st+en)/2;
        for(int i = 0; i < n; i++){
            cnt += arr[i] / mid;
        }
        if(cnt < m) en = mid - 1;
        else{
            ans = mid;
            st = mid + 1;
        }
    }
    cout << ans;
    return 0;
}