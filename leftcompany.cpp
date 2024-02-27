//7785 set
#include<iostream>
#include<set>

using namespace std;

int main(){
    int n;
    set<string> s;

    cin >> n;
    for(int i = 0; i < n; i++){
        string str1, str2;
        cin >> str1 >> str2;
        if(str2 == "enter"){
            s.insert(str1);
        }
        else{
            s.erase(str1);
        }
    }

    for(auto iter = s.rbegin(); iter != s.rend(); iter++){
        cout << *iter << '\n';
    }
    return 0;
}