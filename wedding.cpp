//5567 graph
#include<iostream>
#include<queue>
#include<vector>
using namespace std;

int n, m;
int visited[1001];
vector<int> arr[1001];
int cnt = 0;

void bfs(int start){
    queue<int> q;
    q.push(start);
    visited[start] = true;
    while (!q.empty()){
        int cur = q.front();
        q.pop();
        for(int i = 0; i < arr[cur].size(); i++){
            int next = arr[cur][i];
            if(visited[next] || visited[cur] >= 3) continue;
            q.push(next);
            visited[next] = visited[cur] + 1;
            cnt++;
            
        }
    }
}

int main(){
    int first, end;
    cin >> n >> m;

    for(int i = 0; i < m; i++){
        cin >> first >> end;
        arr[first].push_back(end);
        arr[end].push_back(first);
    }

    bfs(1);

    cout << cnt;

    return 0;
}