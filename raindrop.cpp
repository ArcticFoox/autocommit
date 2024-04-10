//14719 implementation(twopointer)
#include<iostream>

using namespace std;

int arr[501];

int main(){
    int m, n; 
    
    cin >> m >> n;  

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int result = 0; 
    
    for (int i = 1; i < n - 1; i++) {
        int l = 0; 
        int r = 0; 
        for (int j = 0; j < i; j++) {
            if (arr[i] < arr[j])l = max(l, arr[j]); 
        }
        for (int j = i + 1; j < n; j++) {
            if (arr[i] < arr[j])r = max(r, arr[j]); 
        }
        if(l&&r)result += min(l, r) - arr[i]; 
    }
    cout << result;
    return 0; 
}