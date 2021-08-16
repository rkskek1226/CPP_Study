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
	brr.push_back(tmp);   // brr의 끝에 하나의 원소추가, 벡터의 크기를 자동으로 늘림
	brr.erase(brr.begin(), brr.begin() + 2);   // brr.begin()과 brr.begin()+1의 값을 삭제

	vector<int> crr = { 6,7,8,9,10 };
	brr.insert(brr.end(), crr.begin(), crr.end());   // brr에 brr.end()의 위치에 crr.begin()부터 crr.end()전까지 원소 삽입

	return 0;
}
