//01408번 24
/*
문제
도현이는 Counter Terror Unit (CTU)에서 일하는 특수요원이다. 도현이는 모든 사건을 정확하게 24시간이 되는 순간 해결하는 것으로 유명하다. 도현이는 1시간 만에 범인을 잡을 수 있어도 잡지 않는다. 정확하게 24시간이 되는 순간이 아니면 잡지 않는 CTU 특수요원이다.

2008년 3월 3일 월요일, CTU는 새학기에 맞춰 핵폭탄을 날리겠다는 테러 정보를 입수했다. CTU에서는 특수요원 도현이에게 이 임무를 맡겼다. CTU의 프로그래머 준규는 이 사건의 배후가 김선영이란 것을 해킹을 통해 밝혀내었다.

도현이는 선영이를 임무를 시작한지 정확하게 24시간이 되는 순간에 잡으려고 한다.

만약 지금 시간이 13:52:30이고, 임무를 시작한 시간이 14:00:00 이라면 도현이에게 남은시간은 00:07:30 이다.

모든 시간은 00:00:00 ~ 23:59:59로 표현할 수 있다. 입력과 출력에 주어지는 모든 시간은 XX:XX:XX 형태이며, 숫자가 2자리가 아닐 경우에는 0으로 채운다.

도현이가 임무를 시작한 시간과, 현재 시간이 주어졌을 때, 도현이에게 남은 시간을 구하는 프로그램을 작성하시오.

입력
첫째 줄에는 현재 시간이, 둘째 줄에는 도현이가 임무를 시작한 시간이 주어진다. 임무를 시작한 시간과 현재 시간이 같은 경우는 주어지지 않는다.

출력
첫째 줄에 도현이가 임무를 수행하는데 남은 시간을 문제에서 주어지는 시간의 형태 (XX:XX:XX)에 맞춰 출력한다.
*/

//내 코드
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int h1, h2, m1, m2, s1, s2,sum1,sum2,sum;
	char colon;
	cin >> h1 >> colon >> m1 >> colon >> s1;
	cin >> h2 >> colon >> m2 >> colon >> s2;
	sum1 = 3600 * h1 + 60 * m1 + s1;
	sum2 = 3600 * h2 + 60 * m2 + s2;
	if (sum2 > sum1) sum = sum2 - sum1;
	else sum = sum2 - sum1 + 24 * 3600;
	cout << setw(2) << setfill('0') << sum / 3600 << ':'
		 << setw(2) << setfill('0') << (sum % 3600)/60 << ':'
		 << setw(2) << setfill('0') << sum % 60;
}

//숏코딩
/*
#include <cstdio>

int H, M, S, h, m, s;

int main() {
	scanf("%d:%d:%d%d:%d:%d", &H, &M, &S, &h, &m, &s);
	H = (86400 + h * 3600 + m * 60 + s - H * 3600 - M * 60 - S) % 86400;
	printf("%02d:%02d:%02d", H / 3600, H % 3600 / 60, H % 60);
}
*/