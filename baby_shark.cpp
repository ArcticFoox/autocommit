//17086 BFS https://www.acmicpc.net/problem/17086
#include<iostream>
#include<queue>
#include<algorithm>

using namespace std;

int arr[51][51];
int visited[51][51];
int min_dis[51][51];
int dx[8] = {0, 0, 1, 1, 1, -1, -1, -1};
int dy[8] = {1, -1, 1, -1, 0, 0, 1, -1};
int n, m;
int max_dis;

void BFS(int x, int y){
    queue<pair<int, int> > q;
    for(int i = 0; i < 51; i++){
        for(int j = 0; j < 51; j++){
            visited[i][j] = 0;
        }
    }

    q.push({x, y});

    while(!q.empty()){
        int cx = q.front().first;
        int cy = q.front().second;
        q.pop();

        for(int i = 0; i < 8; i++){
            int nx = cx + dx[i];
            int ny = cy + dy[i];

            if(nx < 0 || ny < 0 || nx >= n || ny >= m) continue;
            if(!visited[nx][ny]){
                q.push({nx, ny});
                visited[nx][ny] = visited[cx][cy] + 1;
                min_dis[nx][ny] = min(min_dis[nx][ny], visited[nx][ny]);
            }
        }
    }
    return;
}

void set(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    for(int i = 0; i < 51; i++){
        for(int j = 0; j < 51; j++){
            if(arr[i][j]) min_dis[i][j] = 0;  // 1인 부분을 0으로 만들어줘야 됨
            else min_dis[i][j] = 55;
        }
    }
}

int main(){
    cin >> n >> m;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }

    set();

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(arr[i][j]){ 
                BFS(i, j);
            }
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            max_dis = max(max_dis, min_dis[i][j]);
        }
    }

    cout << max_dis;

    return 0;
}