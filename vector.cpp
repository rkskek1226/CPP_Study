#include <iostream>
#include <string>
#include <vector>
using namespace std;


int main()
{

	int n;
	cin >> n;
	vector<int> arr(n);
	vector<int> brr(5);
	brr = { 1,2,3,4,5 };
	vector<int>::iterator p = brr.begin();

	for (p; p != brr.end(); p++)
		cout << *p << "   ";

	int tmp;
	cin >> tmp;
	brr.push_back(tmp);   // brr�� ���� �ϳ��� �����߰�, ������ ũ�⸦ �ڵ����� �ø�
	brr.erase(brr.begin(), brr.begin() + 2);   // brr.begin()�� brr.begin()+1�� ���� ����

	vector<int> crr = { 6,7,8,9,10 };
	brr.insert(brr.end(), crr.begin(), crr.end());   // brr�� brr.end()�� ��ġ�� crr.begin()���� crr.end()������ ���� ����

	return 0;
}
