//02739�� ������
/*
����
N�� �Է¹��� ��, ������ N���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. ��� ���Ŀ� ���缭 ����ϸ� �ȴ�.

�Է�
ù° �ٿ� N�� �־�����. N�� 1���� ũ�ų� ����, 9���� �۰ų� ����.

���
������İ� ���� N*1���� N*9���� ����Ѵ�.
*/

//�� �ڵ�
#include <iostream>
using namespace std;

int main(){
	int N;
	cin >> N;
	for (int i = 1; i < 10; i++) cout << N << " * " << i << " = " << N * i << '\n';
}

//���ڵ�
/*
#include <iostream>
int main() { 
	int i, n; 
	for (std::cin >> n; i++ < 9;) printf("%d * %d = %d ", n, i, n * i); 
}
*/