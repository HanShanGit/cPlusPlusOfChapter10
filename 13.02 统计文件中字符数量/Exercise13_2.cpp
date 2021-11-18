#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void main()
{
	//ifstream open("D:\\C++程序设计\\C++第十章\\13.01 追加数字于文件后\\Exercise13_1.txt");
	ifstream iopen;
	string name;	cout << "输入文件位置，统计文件中字符数:\n";
	getline(cin, name);
	iopen.open(name.c_str());
	if (!iopen)
	{
		cerr << "打开失败\n";
		exit(1);
	}
	char ch = iopen.get();
	int count = 0;
	while (!iopen.eof())
	{
		count++;
		ch = iopen.get();
	}
	//cout << "D:\\C++程序设计\\13.01 追加数字于文件后\\Exercise13_1.txt" << "有" << count << "个字符\n";
	cout << name << "有 " << count << " 个字符\n";
	iopen.close();
	system("pause");
}