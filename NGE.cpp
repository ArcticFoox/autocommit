//17298 stack
#include<iostream>
#include<stack>

using namespace std;

stack<int> s;
int a;
int arr[1000001];
int ans[1000001];

int main(){
    cin >> a;
    for(int i = 0; i < a; i++){
        cin >> arr[i];
    }

    for(int i = a - 1; i >= 0; i--){
        while(!s.empty() && s.top() <= arr[i]) s.pop();

        if(s.empty()) ans[i] = -1;
        else ans[i] = s.top();

        s.push(arr[i]);
    }

    for(int i = 0; i < a; i++){
        cout << ans[i] << ' ';
    }

    return 0;
}