// 명품 C++ 프로그래밍 5장 실습문제 4번
/* 사용자로부터 2개의 정수를 입력받아 큰 값을 출력하는 main() 작성 
bigger()는 인자로 주어진 a, b가 같으면 true, 아니면 false를 리턴하고 큰 수는 big에 전달한다.
*/
#include <iostream>
using namespace std;

bool bigger(int a, int b, int& big) {
	if (a == b) {
		return true;
	}
	else {
		big = (a > b) ? a : b;
		return false;
	}
}

int main() {
	int x, y, big;
	bool b;
	cout << "두 정수를 입력하세요>> ";
	cin >> x >> y;
	b = bigger(x, y, big);
	if (b) {
		cout << "same" << endl;
	}
	else {
		cout << "큰 수는 " << big << endl;
	}
}