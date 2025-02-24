//1977�� ����������
/*
����
M�� N�� �־��� �� M�̻� N������ �ڿ��� �� ������������ ���� ��� ��� �� ���� ���ϰ� �� �� �ּڰ��� ã�� ���α׷��� �ۼ��Ͻÿ�. ���� ��� M=60, N=100�� ��� 60�̻� 100������ �ڿ��� �� ������������ 64, 81, 100 �̷��� �� 3���� �����Ƿ� �� ���� 245�� �ǰ� �� �� �ּڰ��� 64�� �ȴ�.

�Է�
ù° �ٿ� M��, ��° �ٿ� N�� �־�����. M�� N�� 10000������ �ڿ����̸� M�� N���� ���ų� �۴�.

���
M�̻� N������ �ڿ��� �� ������������ ���� ��� ã�� ù° �ٿ� �� ����, ��° �ٿ� �� �� �ּڰ��� ����Ѵ�. ��, M�̻� N������ �ڿ��� �� ������������ ���� ���� ù° �ٿ� -1�� ����Ѵ�.
*/

//�� Ǯ��
#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int M, N;
	int sumOfPSN = 0;
	int minPSN = 0;
	cin >> M>>N;

	for (int i = sqrt(N); i >= sqrt(M); i--) {
		minPSN = i * i;
		sumOfPSN += minPSN;
	}
	if (sumOfPSN == 0) {
		cout << -1;
	}
	else
	{
		cout << sumOfPSN << endl << minPSN;
	}
}

//���ڵ�
/*
#include<cstdio>
#include<cmath>
int m, n, a, s;
main() {
	scanf("%d %d", &m, &n); 
	a = sqrt(m - 1) + 1;
	for (m = a; m * m <= n; m++)
		s += m * m;
	s ? printf("%d\n%d", s, a * a) : printf("-1");
}
*/