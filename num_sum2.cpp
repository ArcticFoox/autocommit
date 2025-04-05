//2003 two_pointer
#include<iostream>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    int arr[100001];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int cnt = 0;
    int st = 0;
    int en = 0;
    int sum = arr[0];

    while(en < n){
        if(sum == m){
            cnt++;
            sum += arr[++en];
        } else if(sum < m){
            sum += arr[++en];
        } else {
            sum -= arr[st++];
        }
    }

    cout << cnt;
    return 0;
}