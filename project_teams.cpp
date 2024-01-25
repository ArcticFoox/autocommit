//20044 greedy
#include<iostream>
#include<algorithm>

using namespace std;

int n;
int arr[100001];
int min_team = 200000;

int main(){
    cin >> n;

    for(int i = 0; i < 2 * n; i++){
        cin >> arr[i];
    }
    
    int end = (2 * n) - 1;

    sort(arr, arr+(2*n));

    for(int i = 0; i < n; i++){
        int num;
        num = arr[i] + arr[end];
        min_team = min(min_team, num);
        end--;
    }
    cout << min_team;
    return 0;
}