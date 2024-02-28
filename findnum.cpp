//1269 set
#include<iostream>
#include<set>

using namespace std;

int main(){
    int a, b;
    set<int> s;
    cin >> a >> b;

    for(int i = 0; i < a + b; i++){
        int num;
        set<int>::iterator iter;
        cin >> num;
        iter = s.find(num);
        if(iter != s.end()){
            s.erase(num);
        }
        else{
            s.insert(num);
        }
    }

    cout << s.size();
    return 0;
}