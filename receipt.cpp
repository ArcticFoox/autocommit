//25304 basic
#include<iostream>

using namespace std;

int main(){
    int n, m;
    int sum = 0;

    cin >> n >> m;

    while(m--){
        int a,b;
        cin >> a >> b;

        sum += (a * b);
    }
    
    if(sum == n) cout << "Yes";
    else cout << "No";

    return 0;
}