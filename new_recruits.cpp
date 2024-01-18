//1946 Greedy https://www.acmicpc.net/problem/1946
#include<iostream>
#include<algorithm>

using namespace std;

int t, n;

int main(){
    cin >> t;

    while(t--){
        pair<int, int> arr[100001];
        int cnt = 1;

        cin >> n;
        
        for(int i = 0; i < n; i++){
            cin >> arr[i].first >> arr[i].second;
        }

        sort(arr, arr+n);

        int index = arr[0].second;
        for(int i = 1; i < n; i++){
            if(arr[i].second < index){
                index = arr[i].second;
                cnt++;
            }
        }
        cout << cnt << '\n';
    }
    
    return 0;
}