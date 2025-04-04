//2953 basic
#include<iostream>

using namespace std;

int main(){
    int idx = 0;
    int Max = 0;

    for(int i = 0; i < 5; i++){
        int sum = 0;
        for(int j = 0; j < 4; j++){
            int num;
            cin >> num;
            sum += num;
        }

        if(sum > Max){
            Max = sum;
            idx = i;
        }
    }

    cout << idx << " " << Max;
    return 0;
}