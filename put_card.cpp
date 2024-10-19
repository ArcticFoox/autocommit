//5568 backtracking
#include<iostream>
#include<map>

using namespace std;

map<int, int> num;
int tmp[5];
bool visited[11];
int card[11];
int n, k;

void back(int row){
    if(row == k){
        int sum = tmp[0];

        for(int i = 1; i < k; i++){
            if(tmp[i] / 10 >= 1){
                sum *= 100;
            }
            else{
                sum *= 10;
            }
            sum += tmp[i];
        }

        num[sum]++;
        return;
    }

    for(int i = 0; i < n; i++){
        if(visited[i]) continue;
        visited[i] = true;
        tmp[row] = card[i];
        back(row+1);
        visited[i] = false;
    }
}

int main(){

    cin >> n >> k;

    for(int i = 0; i < n; i++){
        cin >> card[i];
    }

    back(0);

    cout << num.size();
    return 0;
}