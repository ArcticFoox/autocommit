//1822 binarysearch
#include<iostream>
#include<algorithm>

using namespace std;

int n, m;
unsigned int arr[500005];
unsigned int arr2[500005];
unsigned int ans[500005];
int cnt;

bool binarysearch(int target){
    int st = 0, en = m - 1;
    while(st <= en){
        int mid = (st+en)/2;
        if(arr2[mid] < target) st = mid + 1;
        else if(arr2[mid] > target) en = mid - 1;
        else return true;
    }
    return false;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> m;

    for(int i = 0; i < n; i++) cin >> arr[i];
    for(int i = 0; i < m; i++) cin >> arr2[i];
    sort(arr2, arr2 + m);

    for(int i = 0 ; i < n; i++){
        if(!binarysearch(arr[i])){
            ans[cnt++] = arr[i];
            
        }
    }

    sort(ans, ans+cnt);
    cout << cnt << '\n';
    for(int i = 0; i < cnt; i++){
        cout << ans[i] << ' ';
    }

    return 0;
}