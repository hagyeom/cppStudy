// ��ǰ C++ ���α׷��� 5�� �ǽ����� 4��
/* ����ڷκ��� 2���� ������ �Է¹޾� ū ���� ����ϴ� main() �ۼ� 
bigger()�� ���ڷ� �־��� a, b�� ������ true, �ƴϸ� false�� �����ϰ� ū ���� big�� �����Ѵ�.
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
	cout << "�� ������ �Է��ϼ���>> ";
	cin >> x >> y;
	b = bigger(x, y, big);
	if (b) {
		cout << "same" << endl;
	}
	else {
		cout << "ū ���� " << big << endl;
	}
}