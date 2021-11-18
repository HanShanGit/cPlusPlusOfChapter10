#include <iostream>
#include <fstream>
#include <ctime>
using namespace std;

void main()
{
	ofstream file("Exercise13_1.txt",ios::app);
	if(!file)
	{
		cerr << "´ò¿ªÊ§°Ü\n";
		exit(1);
	}
	srand(time(0));
	for (int i = 0; i < 100; i++)
	{
		int tem = rand() % 20 + 10;
		file << tem << " ";
	}
	file.close();
	system("pause");
}