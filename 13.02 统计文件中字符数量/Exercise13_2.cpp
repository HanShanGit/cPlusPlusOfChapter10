#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void main()
{
	//ifstream open("D:\\C++�������\\C++��ʮ��\\13.01 ׷���������ļ���\\Exercise13_1.txt");
	ifstream iopen;
	string name;	cout << "�����ļ�λ�ã�ͳ���ļ����ַ���:\n";
	getline(cin, name);
	iopen.open(name.c_str());
	if (!iopen)
	{
		cerr << "��ʧ��\n";
		exit(1);
	}
	char ch = iopen.get();
	int count = 0;
	while (!iopen.eof())
	{
		count++;
		ch = iopen.get();
	}
	//cout << "D:\\C++�������\\13.01 ׷���������ļ���\\Exercise13_1.txt" << "��" << count << "���ַ�\n";
	cout << name << "�� " << count << " ���ַ�\n";
	iopen.close();
	system("pause");
}