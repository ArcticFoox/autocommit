//15650 backtracking https://www.acmicpc.net/problem/15650
#include<iostream>

using namespace std;

int n, m;
bool visited[9];
int arr[9];

void dfs(int cnt, int num){
    if(cnt == m){
        for(int i = 0; i < m; i++){
            cout << arr[i] << ' ';
        }
        cout << '\n';
        return;
    }

    for(int i = num; i <= n; i++){
        if(visited[i]){
            continue;
        }
        visited[i] = true;
        arr[cnt] = i;
        dfs(cnt + 1, i + 1);
        visited[i] = false;
    }
}

int main(){
    cin >> n >> m;

    dfs(0, 1);
    return 0;
}