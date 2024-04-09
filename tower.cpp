//2493 stack
#include<iostream>
#include<stack>

using namespace std;

int n, height;
stack<pair<int, int> > s;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;

    for(int i = 1; i <= n; i++){
        cin >> height;
        while(!s.empty() && s.top().first < height){
            s.pop();
        }
        
        if(!s.empty())
            cout << s.top().second << ' ';
        else
            cout << 0 << ' ';

        s.push(make_pair(height, i));
    }

    return 0;
}