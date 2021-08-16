#include <iostream>
#include <string>
using namespace std;

int main()
{

	string one("qwert");   // ������ 1
	string two(10, 'q');   // ������ 2
	string three(one);   // ������ 3
	string four = one + two;   // ������ 4
	char arr[20] = "asdfgh";
	string five(arr, 10);   // ������ 5
	string six(arr + 1, arr + 5);   //������ 6

	string str("qwert");
	cout << str.length() << "   " << str.size() << endl;   // 5�� ����, length()�� size()�� ���� �Լ�
	cout << str.find("rt") << endl;   // 3�� ����
	cout << str.find_first_of("twerq") << endl;   // 0�� ����
	cout << str.find_last_of("qwert") << endl;   // 4�� ����
	cout << str.find_first_not_of("qaert") << endl;   // 1�� ����
	cout << str.find_last_not_of("qweat") << endl;   // 3�� ����

	return 0;
}