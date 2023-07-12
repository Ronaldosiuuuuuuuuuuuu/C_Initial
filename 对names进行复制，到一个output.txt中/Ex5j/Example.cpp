#include<iostream>
#include<set>
using namespace std;
int main() {

	//声明默认集合，默认升序
	multiset< int > set1;
	for (int i = 10; i >= 0; i--) {
		set1.insert(i);
	}
	set1.insert(1);//测试是否去重 
	set1.insert(2);

	//顺序输出
	cout << "顺序遍历集合set1：";
	for (multiset<int>::iterator it = set1.begin(); it != set1.end(); it++) {
		cout << *it << " ";
	}

	//逆序输出 
	cout << endl << "逆序遍历集合set1：";
	for (multiset<int>::reverse_iterator it = set1.rbegin(); it != set1.rend(); it++) {
		cout << *it << " ";
	}
	//测试元素获取集合大小 
	cout << endl << "set1集合大小为:" << set1.size();


	//测试集合是否非空 
	multiset< int, less<int> > set2;
	cout << endl << "set1是否为空" << set1.empty();
	cout << endl << "set2是否为空" << set2.empty() << endl;

	//删除元素
	set1.erase(1);
	cout << "删除元素1后,set1集合元素：：";
	for (multiset<int>::iterator it = set1.begin(); it != set1.end(); it++) {
		cout << *it << " ";
	}

	//查找元素8
	cout << endl << "找到set1集合元素8并输出：";
	multiset<int>::iterator it = set1.find(8);
	cout << *it;

	//交换集合元素
	set2.insert(0);
	set2.insert(0);
	set1.swap(set2);
	cout << endl << "交换后set1元素为:";
	for (multiset<int>::iterator it = set1.begin(); it != set1.end(); it++) {
		cout << *it << " ";
	}
	cout << endl << "交换后set2元素为:";
	for (multiset<int>::iterator it = set2.begin(); it != set2.end(); it++) {
		cout << *it << " ";
	}

	//清空集合
	set1.clear();
	cout << endl << "集合set1是否非空:" << set1.empty() << endl;

	//声明集合按降序排列
	multiset< int, greater<int> > set3;
	set3.insert(11);
	set3.insert(13);
	set3.insert(14);
	cout << "输出降序集合set3:";
	for (multiset<int> ::iterator it = set3.begin(); it != set3.end(); it++) {
		cout << *it << " ";
	}
	return 0;
}
