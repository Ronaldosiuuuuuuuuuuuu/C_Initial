#include<iostream>
#include<fstream>
#include<string>
#include<set>
using namespace std;
int main() {
	multiset<string>ms;
	ifstream inFile("names.txt");
	ofstream outFile("output.txt");//����һ�����캯��
	string txtLine;
	int LineNumber = 1;
	string PrevName;
	while (getline(inFile, txtLine))
	{
		ms.insert(txtLine);//�������ļ����뵽outFile��
	}
	inFile.close();
	for (const auto& name : ms) {
		if (PrevName.empty() || name != PrevName) {
			outFile << LineNumber << "." << name << endl;
			PrevName = name;
			LineNumber++;
		}
	}
	outFile.close();
	cout << "finish" << endl;
	return 0;
}