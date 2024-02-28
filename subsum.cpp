//11659 dp
#include<iostream>
using namespace std;

int arr[100001];
int ans[100001];
int N, M;

int main(){
    cin >> N >> M;
    for(int i = 1; i <= N; i++){
        int num;
        cin >> num;
        arr[i] = arr[i - 1] + num;
    }
    
    for(int i = 0; i < M; i++){
        int st, en;
        cin >> st >> en;

        ans[i] = arr[en] - arr[st - 1];
    }
    
    for(int i = 0; i < M; i++){
        cout << ans[i] << '\n';
    }
    return 0;
}