//02439�� �����-2
/*
����
ù° �ٿ��� �� 1��, ��° �ٿ��� �� 2��, N��° �ٿ��� �� N���� ��� ����

������, �������� �������� ������ ��(���� ����)�� ����Ͻÿ�.

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
		for (int j = 1; j <= N; j++) cout << ((j <= N - i) ? " " : "*");
		cout << '\n';
	}
}

//���ڵ�
/*
#import<ios>
int a,i,j;
main(){
	for(scanf("%d",&a);i++<a;puts(""))
		for(j=a;j--;) printf(j<i?"*":" ");
}
*/