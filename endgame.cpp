//1436 burteforce
#include<iostream>
#include<string>

using namespace std;

int main(){
    int n;
    cin >> n;

    int num = 666;
    int cnt = 0;
    int result = 0;
    bool flag = true;
    string target;

    while(flag){
        target = to_string(num);
        for(int j = 0; j < target.length()-2; j++){
            if(target[j] == '6' && target[j+1] == '6' && target[j+2] == '6'){
                cnt++;
                if(cnt == n){
                    result = num;
                    flag = false;
                }
                break;
            }
        }
        num++;
    }
    cout << result;
    return 0;
}