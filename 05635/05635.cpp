//05635�� ����
/*
����
� �ݿ� �ִ� �л����� ������ �־����� ��, ���� ���̰� ���� ����� ���� ���� ����� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

�Է�
ù° �ٿ� �ݿ� �ִ� �л��� �� n�� �־�����. (1 �� n �� 100)

���� n�� �ٿ��� �� �л��� �̸��� ������ "�̸� dd mm yyyy"�� ���� �������� �־�����. �̸��� �� �л��� �̸��̸�, �ִ� 15���ڷ� �̷���� �ִ�. dd mm yyyy�� ���� ��, ��, �����̴�. (1990 �� yyyy �� 2010, 1 �� mm �� 12, 1 �� dd �� 31) �־����� ������ �ùٸ� ��¥�̸�, ��, �� ���� 0���� �������� �ʴ´�.

�̸��� ���ų�, ������ ���� ����� ����.

���
ù° �ٿ� ���� ���̰� ���� ����� �̸�, ��° �ٿ� ���� ���̰� ���� ��� �̸��� ����Ѵ�.
*/

//�� �ڵ�(����)
#include<iostream>
#include<string>
#include<map>
#include<sstream> // ostringstream�� ����ϱ� ���� �ʿ�
#include <iomanip>
using namespace std;

int main() {
	int n,day,month,year;
	string name;
	map<string, string>data;
	cin >> n;
	while (n--) {
		cin >> name >> day >> month >> year;
		ostringstream oss;
		oss << setw(4) << setfill('0') << year
			<< setw(2) << setfill('0') << month
			<< setw(2) << setfill('0') << day;
		string yearMonthDay = oss.str();
		data.insert({ yearMonthDay,name });
	}
	cout << data.rbegin()->second << endl << data.begin()->second<<endl;
}

//���ڵ�
/*
#include<iostream>
int N, x, m = 1e6, C, B, A;
int main() {
	std::string s, X, M;
	std::cin >> N;
	while (N--) {
		std::cin >> s >> C >> B >> A;
		C = 31 * B + 366 * A;
		if (C < m)M = s, m = C;
		if (C > x)X = s, x = C;
	}
	std::cout << X << std::endl << M;
	return 0;
}
*/