#include <iostream>
#include <string>
using namespace std;

int main()
{

	string one("qwert");   // 생성자 1
	string two(10, 'q');   // 생성자 2
	string three(one);   // 생성자 3
	string four = one + two;   // 생성자 4
	char arr[20] = "asdfgh";
	string five(arr, 10);   // 생성자 5
	string six(arr + 1, arr + 5);   //생성자 6

	string str("qwert");
	cout << str.length() << "   " << str.size() << endl;   // 5를 리턴, length()와 size()는 같은 함수
	cout << str.find("rt") << endl;   // 3을 리턴
	cout << str.find_first_of("twerq") << endl;   // 0을 리턴
	cout << str.find_last_of("qwert") << endl;   // 4를 리턴
	cout << str.find_first_not_of("qaert") << endl;   // 1을 리턴
	cout << str.find_last_not_of("qweat") << endl;   // 3을 리턴

	return 0;
}