//32653 gcd_lcm
#include<iostream>

using namespace std;

long long gcd(long long a, long long b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

long long lcm(long long a, long long b){
    return a * b / gcd(a, b);
}

int main(){
    int n;

    cin >> n;
    long long tmp = 0;
    cin >> tmp;
    tmp *= 2;
    for(int i = 1; i < n; i++){
        long long num;
        cin >> num;
        tmp = lcm(tmp, num * 2);
    }

    cout << tmp;
    return 0;
}