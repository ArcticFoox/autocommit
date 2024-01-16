//1697 BFS https://www.acmicpc.net/problem/1697
#include<iostream>
#include<queue>

using namespace std;

int n, k;
int cnt;
int arr[100001];
int temp;

int main(){
    cin >> n >> k;

    queue<int> q;

    q.push(n);

    while(!q.empty()){
        temp = q.front();
        q.pop();

        if(temp < 0 || temp > 100000) continue;        // 범위를 잘 정해야한다
        if(temp == k){                                 // 처음 접근 때 범위를 지정 안함
            cout << arr[temp];
            break;
        }

        if(temp - 1 >= 0 && !arr[temp - 1]){
            arr[temp - 1] = arr[temp] + 1;
            q.push(temp - 1);
        }
        if(temp + 1 <= 100000 && !arr[temp + 1]){
            arr[temp + 1] = arr[temp] + 1;
            q.push(temp + 1);
        }
        if(temp * 2 <= 100000 && !arr[temp * 2]){
            arr[temp * 2] = arr[temp] + 1;
            q.push(temp * 2);
        }
    }

    return 0;
}