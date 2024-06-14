//3058 math
#include<iostream>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int Min = 101;
        int sum = 0;
        for(int i = 0; i < 7; i++){
            int num;
            cin >> num;
            if(num % 2 == 0){
                sum += num;
                Min = min(Min, num);
            }
        }
        cout << sum << ' ' << Min << '\n'; 
    }
    return 0;
}