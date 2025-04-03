//1568 basic
#include <iostream>
using namespace std;

int N;

int main(){
	cin >> N;

	int sing = 1;
	int cnt = 0;

	while (N != 0) {
		if (N < sing) sing = 1;

		N -= sing;
		sing++;
		cnt++;
	}

	cout << cnt;
	return 0;

}