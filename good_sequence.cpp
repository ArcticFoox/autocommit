//2661 Backtracking https://www.acmicpc.net/problem/2661
#include <iostream>
#include <string>
using namespace std;

int N;
string result;
bool flag = false;

void back(string tmp,int cnt) {
	if(flag) return;
	int size = tmp.size();
	for(int i = 1; i <= size / 2; i++){
		if(tmp.substr(size - i, i) == tmp.substr(size - 2 * i, i)) return;
	}
	if(cnt == N){
		result = tmp;
		flag = true;
	}
	for(int i = 0; i < N; i++){
		back(tmp + "1", cnt + 1);
		back(tmp + "2", cnt + 1);
		back(tmp + "3", cnt + 1);
	}
}

int main() {
	cin >> N;
	back("",0);
	cout << result;
	return 0;
}