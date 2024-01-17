//1987 backtracking https://www.acmicpc.net/problem/1987
#include<iostream>

using namespace std;

int r, c;
bool alpha[26];
char arr[21][21];
int dx[4] = {0, 1, 0, -1};
int dy[4] = {-1, 0, 1, 0};
int answer;

void back(int x, int y, int cnt){
    answer = max(answer, cnt);
    for(int i = 0; i < 4; i++){
        int nx = x + dx[i];
        int ny = y + dy[i];
        if(nx < 0 || ny < 0 || nx >= r || ny >= c) continue;
        if(!alpha[arr[nx][ny] - 'A']){
            alpha[arr[nx][ny] - 'A'] = true;
            back(nx, ny, cnt+1);
            alpha[arr[nx][ny] - 'A'] = false;
        }
    }
    return;
}

int main(){
    cin >> r >> c;

    for(int i = 0; i < r; i++){
        string str;
        cin >> str;
        for(int j = 0; j < c; j++){
            arr[i][j] = str[j];
        }
    }
    alpha[arr[0][0] - 'A'] = true;
    back(0, 0, 1);
    
    cout << answer;

    return 0;
}