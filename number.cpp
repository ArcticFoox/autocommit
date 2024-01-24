//10093 implementation 
#include<iostream>

using namespace std;

unsigned long long a, b;

int main(){
    cin >> a >> b;
    
    if(a > b){		
        unsigned long long tmp = b;		
        b = a;		
        a = tmp;	
    } 
    if(a == b){		
        cout << 0;
    }
    else{		
        cout << b - a - 1 << '\n';		
        for(a + 1; a < b - 1; a++){					
            cout << a + 1 << " ";		
        }	
    }

    return 0;
}