//02440�� �����-3
/*
����
ù° �ٿ��� �� N��, ��° �ٿ��� �� N-1��, ..., N��° �ٿ��� �� 1���� ��� ����

�Է�
ù° �ٿ� N(1 �� N �� 100)�� �־�����.

���
ù° �ٺ��� N��° �ٱ��� ���ʴ�� ���� ����Ѵ�.
*/

//�� �ڵ�
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

//���ڵ�
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