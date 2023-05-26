// ��ǰ C++ ���α׷��� 5�� �ǽ����� 6��
/* ���ڿ� a���� ���� c�� ã��, ���� c�� �ִ� ������ ���� ������ ����.
����, ���� c�� ã�� �� ���ٸ� success ���� �Ű� ������ false�� ����.
���� ã�� �Ǹ� success�� true�� ����.
*/
#include <iostream>
using namespace std;

char& find(char a[], char c, bool& success) {
	for (int i = 0; a[i] != '\0'; i++) {
		if (a[i] == c) {
			success = true;
			return a[i];
		}
	}
	success = false;
	return a[0];
}

int main() {
	char s[] = "Mike";
	bool b = false;
	char& loc = find(s, 'M', b);
	if (b == false) {
		cout << "M�� �߰��� �� ����" << endl;
		return 0;
	}
	loc = 'm'; // 'M' ��ġ�� m ���
	cout << s << endl;
}