// ��ǰ C++ ���α׷��� 5�� �ǽ����� 1��
/* �� ���� Circle ��ü�� ��ȯ�ϴ� swap() �Լ��� 
'������ ���� ȣ��'�� �ǵ��� �ۼ��ϰ� ȣ���ϴ� ���α׷� */ 
#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle():Circle(1){}
	Circle(int r) { this->radius = r; }
	void show() { cout << "������ : " << radius << endl; }
};

void swap(Circle& a, Circle& b) {
	Circle tmp;

	tmp = a;
	a = b;
	b = tmp;
}

int main() {
	Circle a(1), b(2);
	a.show();
	b.show();

	swap(a, b);
	a.show();
	b.show();
	return 0;
}