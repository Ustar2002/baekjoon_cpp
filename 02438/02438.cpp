//02438�� �����-1
/*
����
ù° �ٿ��� �� 1��, ��° �ٿ��� �� 2��, N��° �ٿ��� �� N���� ��� ����

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
		for (int j = 1; j <= i; j++) cout << "*";
		cout << '\n';
	}
}

//���ڵ�
/*
#include<ios>
int N, i, j; main() { for (scanf("%d", &N); ++i < N + 1;)for (j = 0; j++ < i; printf(j == i ? "*\n" : "*")); }
*/