//1978 prime
#include<iostream>

using namespace std;

bool prime_one(int n){
    for(int i = 2; i < n; i++){
        if(n % i == 0) return false;
    }
    return true;
}

bool prime_two(int n){
    for(int i = 2; i < n / 2; i++){
        if(n % i == 0) return false;
    }
    return true;
}

bool prime_three(int n){
    for(int i = 2; i * i <= n; i++){
        if(n % i == 0) return false;
    }
    return true;
}

int main(){
    int n;
    int cnt = 0;
    cin >> n;

    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        if(prime_three(a)) cnt++;
    }

    cout << cnt;
    return 0;
}