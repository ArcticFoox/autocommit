#include<iostream>

using namespace std;

int main(){
    int k[3];
    
    cin >> k[0];
    cin >> k[1];
    cin >> k[2];

    sort(k, k+3);

    cout << max(k[2] - k[1], k[1] - k[0]) - 1;
    
    return 0;
}