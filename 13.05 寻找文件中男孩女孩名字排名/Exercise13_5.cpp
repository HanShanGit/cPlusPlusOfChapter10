#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct name
{
	int order;
	string m_name;
	int m_count;
	string f_name;
	int f_count;
};

void main()
{
	cout << "Enter the year: "; string year;	getline(cin,year);
	string orgin = "Babynameranking";
	string filename = orgin + year + ".txt";
	ifstream ifile(filename.c_str());
	if (!ifile)
	{
		cerr << "打开" << filename << "文件失败\n";
		exit(1);
	}
	name FILE[1000];
	for (int i = 0; i < 1000; i++)
	{
		ifile.read((char*)&FILE[i], sizeof(FILE[i]));
	}
	cout << "Enter the genger: "; char gender;	cin >> gender;
	cout << "Enter the name: ";		string name;	cin >> name;
	for (int i = 0; i < 1000; i++)
	{
		if (gender == 'M')
		{
			if (FILE[i].m_name == name)
			{
				cout << name << " is ranked #" << i + 1 << " in year " << year << endl;
				break;
			}
			if (i == 999)
				cout << "The name " << name << " is not ranked in year " << year << endl;
		}
		else if (gender == 'F')
		{
			if (FILE[i].f_name == name)
			{
				cout << name << " is ranked #" << i + 1 << " in year " << year << endl;
				break;
			}
			if (i == 999)
				cout << "The name " << name << " is not ranked in year " << year << endl;
		}
	}
	ifile.close();
	system("pause");
}