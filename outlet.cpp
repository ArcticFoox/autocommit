//1700 greedy
#include<iostream>
#include<algorithm>

using namespace std;

int arr[101];
int plug[101];
int n, k;

int main(){
    cin >> n >> k;

    for(int i = 0; i < k; i++){
        cin >> arr[i];
    }

    int result = 0;
    for(int i = 0; i < k; i++){
        bool plugin = false;
        for(int j = 0; j < n; j++){
            if(plug[j] == arr[i]){
                plugin = true;
                break;
            }
        }
        if(plugin) continue;
        
        for(int j = 0; j < n; j++){
            if(!plug[j]){
                plug[j] = arr[i];
                plugin = true;
                break;
            }
        }
        if(plugin) continue;

        int idx, deviceidx = -1;
        for(int j = 0; j < n; j++){
            int lastidx = 0;
            for(int m = i + 1; m < k; m++){
                if(plug[j] == arr[m]) break;
                lastidx++;
            }
            if(lastidx > deviceidx){
                idx = j;
                deviceidx = lastidx;
            }
        }
        result++;
        plug[idx] = arr[i];
    }
    cout << result;
    return 0;
}