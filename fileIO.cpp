#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
	char ch;
	ifstream fin("test.txt");
	
	if (fin.is_open())
	{
		cout << "test.txt ���� �����Դϴ�" << endl;
		while (fin.get(ch))
			cout << ch;
		fin.close();
	}

	ofstream fout("test.txt", ios_base::app);
	string name;
	if (fout.is_open())
	{
		while (1)
		{
			cout << "�߰��� �̸� �Է� : ";
			getline(cin, name);
			
			if (name.size() == 0)
				break;
			fout << name << endl;
			
		}
		fout.close();
	}

	fin.clear();
	fin.open("test.txt");
	cout << endl;
	if (fin.is_open())
	{
		cout << "test.txt ���� �����Դϴ�" << endl;
		while (fin.get(ch))
			cout << ch;
	}
	fin.close();

	return 0;
}