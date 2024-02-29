//4153 math
#include<iostream>

using namespace std;

int main(){
    while(true){
        int a, b, c;
        cin >> a >> b >> c;

        if(!a && !b && !c)
            break;
        
        if((c * c == a * a + b * b) || 
            (b * b == a * a + c * c) || (a * a == c * c + b * b))
            cout << "right\n";
        else{
            cout << "wrong\n";
        }
    }
    return 0;
}