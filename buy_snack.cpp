//17450 implementation
#include<iostream>

using namespace std;

int main(){
    float Max = 0;
    int index = 0;
    for(int i = 0; i < 3; i++){
        float price, weight;
        cin >> price >> weight;
        price *= 10;
        weight *= 10;
        if(price >= 5000) price -= 500;
        float ef = weight / price;
        if(Max < ef){
            Max = ef;
            index = i;
        }
    }
    
    if(index == 0){
        cout << 'S';
    }
    else if(index == 1){
        cout << 'N';
    }
    else{
        cout << 'U';
    }

    return 0;
}