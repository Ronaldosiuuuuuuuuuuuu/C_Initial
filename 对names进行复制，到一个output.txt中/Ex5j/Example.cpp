#include<iostream>
#include<set>
using namespace std;
int main() {

	//����Ĭ�ϼ��ϣ�Ĭ������
	multiset< int > set1;
	for (int i = 10; i >= 0; i--) {
		set1.insert(i);
	}
	set1.insert(1);//�����Ƿ�ȥ�� 
	set1.insert(2);

	//˳�����
	cout << "˳���������set1��";
	for (multiset<int>::iterator it = set1.begin(); it != set1.end(); it++) {
		cout << *it << " ";
	}

	//������� 
	cout << endl << "�����������set1��";
	for (multiset<int>::reverse_iterator it = set1.rbegin(); it != set1.rend(); it++) {
		cout << *it << " ";
	}
	//����Ԫ�ػ�ȡ���ϴ�С 
	cout << endl << "set1���ϴ�СΪ:" << set1.size();


	//���Լ����Ƿ�ǿ� 
	multiset< int, less<int> > set2;
	cout << endl << "set1�Ƿ�Ϊ��" << set1.empty();
	cout << endl << "set2�Ƿ�Ϊ��" << set2.empty() << endl;

	//ɾ��Ԫ��
	set1.erase(1);
	cout << "ɾ��Ԫ��1��,set1����Ԫ�أ���";
	for (multiset<int>::iterator it = set1.begin(); it != set1.end(); it++) {
		cout << *it << " ";
	}

	//����Ԫ��8
	cout << endl << "�ҵ�set1����Ԫ��8�������";
	multiset<int>::iterator it = set1.find(8);
	cout << *it;

	//��������Ԫ��
	set2.insert(0);
	set2.insert(0);
	set1.swap(set2);
	cout << endl << "������set1Ԫ��Ϊ:";
	for (multiset<int>::iterator it = set1.begin(); it != set1.end(); it++) {
		cout << *it << " ";
	}
	cout << endl << "������set2Ԫ��Ϊ:";
	for (multiset<int>::iterator it = set2.begin(); it != set2.end(); it++) {
		cout << *it << " ";
	}

	//��ռ���
	set1.clear();
	cout << endl << "����set1�Ƿ�ǿ�:" << set1.empty() << endl;

	//�������ϰ���������
	multiset< int, greater<int> > set3;
	set3.insert(11);
	set3.insert(13);
	set3.insert(14);
	cout << "������򼯺�set3:";
	for (multiset<int> ::iterator it = set3.begin(); it != set3.end(); it++) {
		cout << *it << " ";
	}
	return 0;
}
