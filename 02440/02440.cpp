//02440번 별찍기-3
/*
문제
첫째 줄에는 별 N개, 둘째 줄에는 별 N-1개, ..., N번째 줄에는 별 1개를 찍는 문제

입력
첫째 줄에 N(1 ≤ N ≤ 100)이 주어진다.

출력
첫째 줄부터 N번째 줄까지 차례대로 별을 출력한다.
*/

//내 코드
#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;
	for (int i = 1; i <= N; i++) {
		for (int j = 0; j < N-i+1; j++) cout << "*" ;
		cout << '\n';
	}
}

//숏코딩
/*
#include <iostream>
int main() { 
	int N; 
	for (std::cin >> N; N; --N) { 
		for (int i = 0; i < N; ++i) std::cout << "*"; 
		std::cout << "\n"; 
	} 
}
*/