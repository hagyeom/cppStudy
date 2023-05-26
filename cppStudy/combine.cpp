// 명품 C++ 프로그래밍 5장 실습문제 3번
#include <iostream>
#include <String>
using namespace std;

void combine(string& text1, string& text2, string& text3) {
	text3 = text1 + " " + text2;
}
int main() {
	string text1("I love you"), text2("very much");
	string text3; // 비어 있는 문자열
	combine(text1, text2, text3); // text1과 " ", 그리고 text2를 덧붙여 text3 만들기
	cout << text3; // "I love you very much" 출력
}