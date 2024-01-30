//2529 backtracking
#include<iostream>
#include<math.h>

using namespace std;

int n;
char sign[10];
int arr[11];
bool visited[11];
long long Min = 9876543210;
long long Max = 0;

void back(int num){
    if(num == n + 1){
        long long result = 0;
        for(int i = 0; i < n + 1; i++){
            result = result * 10 + arr[i];           //char 계산은 이렇게
        }
        Min = min(Min, result);
        Max = max(Max, result);
        return;
    }

    for(int i = 0; i < 10; i++){
        if(visited[i]) continue;
        if(num){
            if(sign[num - 1] == '>'){
                if(arr[num - 1] < i) continue;
            }
            else{
                if(arr[num - 1] > i) continue;
            }
        }
        visited[i] = true;
        arr[num] = i;
        back(num + 1);
        visited[i] = false;
    }
}

int main(){
    cin >> n;

    long long comp = pow(10, n);      // 이 부분과 밑의 if 문을 통해서 0을 만든다. 단순하게 자리수 만큼의 수를 만들고 비교하는 것

    for(int i = 0; i < n; i++){
        cin >> sign[i];
    }
    
    back(0);

    cout << Max << '\n';
    if(Min < comp){           // 자리 수보다 Min이 부족하면 자리수를 채워주는 것
        cout << 0;
    }
    cout << Min;              //Min이 021이 아닌 21로만 나오는 것을 해결해야함

    return 0;

}