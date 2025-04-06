//1075 brute_force
#include<iostream>

using namespace std;

int main(){
    int n, f;
    cin >> n >> f;

    n /= 100;
    n *= 100;

    while (n % f != 0) n++;
    if(n < 10) cout << "0";
    else cout << n;

    return 0;
}