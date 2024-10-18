//10974 backtracking
#include<iostream>

using namespace std;

int n;
int arr[9];
bool visited[9];

void back(int row){
    if(row == n){
        for(int i = 0; i < n; i++){
            cout << arr[i] << ' ';
        }
        cout << '\n';
        return;
    }

    for(int i = 1; i <= n; i++){
        if(visited[i]) continue;
        visited[i] = true;
        arr[row] = i;
        back(row+1);
        visited[i] = false;
    }
}

int main(){
    cin >> n;

    back(0);

    return 0;
}