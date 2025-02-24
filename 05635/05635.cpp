//05635번 생일
/*
문제
어떤 반에 있는 학생들의 생일이 주어졌을 때, 가장 나이가 적은 사람과 가장 많은 사람을 구하는 프로그램을 작성하시오.

입력
첫째 줄에 반에 있는 학생의 수 n이 주어진다. (1 ≤ n ≤ 100)

다음 n개 줄에는 각 학생의 이름과 생일이 "이름 dd mm yyyy"와 같은 형식으로 주어진다. 이름은 그 학생의 이름이며, 최대 15글자로 이루어져 있다. dd mm yyyy는 생일 일, 월, 연도이다. (1990 ≤ yyyy ≤ 2010, 1 ≤ mm ≤ 12, 1 ≤ dd ≤ 31) 주어지는 생일은 올바른 날짜이며, 연, 월 일은 0으로 시작하지 않는다.

이름이 같거나, 생일이 같은 사람은 없다.

출력
첫째 줄에 가장 나이가 적은 사람의 이름, 둘째 줄에 가장 나이가 많은 사람 이름을 출력한다.
*/

//내 코드(ㅈㅈ)
#include<iostream>
#include<string>
#include<map>
#include<sstream> // ostringstream를 사용하기 위해 필요
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

//숏코드
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