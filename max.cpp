//2562 basic
#include<iostream>

using namespace std;

int main(){
    int arr[9];
    int Max = 0;
    int idx;
    for(int i = 0; i < 9; i++){
        cin >> arr[i];
        if(Max < arr[i]){
            Max = arr[i];
            idx = i;
        }
    }

    cout << Max << '\n' << idx + 1;
    return 0;
}