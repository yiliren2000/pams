#include <iostream>
#include<string>
#include<fstream>
#include<iomanip>
using namespace std;

#include "myfunction.h"
using namespace myspace;

#include "FileOperate.h"
#include "Person.cpp"

#define pi 3.14;//�����

void dataType() {

	bool b;
	int i;
	float f;
	double d;
	char c;
	wchar_t w;

	printf("i��һ�������%d\n", i);
	//		signed �з���
	//		unsigned �޷���
	//		short ����
	//		long ����

	cout << sizeof(b) << sizeof(i) << sizeof(f) << sizeof(d) << sizeof(c)
			<< sizeof(w) << endl;

}

//ö������
enum Week {
	monday = 1, tuesday, wennesday, thursday, friday, saturday, sunday
};

int Person::count = 0;//��ʼ����ľ�̬����

int main() {

	//	io();
	//	dataType();

//	double i = pi;
//
//	cout << i << endl;
//
//	const double pai = 3.1415926;//����
//
//	cout << pai << endl;
//
//	Week today = monday;
//
//	cout << today << endl;
//
//	//����ͷ�ļ�����
//	hello();
//
//	string str = "�Ұ������찲��";
//
//	cout << str << endl;
//
//	int i_array[3] = {1,2,3};
//
//	for(int i = 0 ; i < 3 ; i ++){
//
//		cout << i_array[i] << endl;
//	}
//
//	int a = 5;
//	fun1(a);
//	cout << "ֵ����" <<a<< endl;
//	fun2(a);
//	cout << "��ַ����" <<a<< endl;
//
//	print();
//	testPoint();
//
//	testAdd();

//	Person::count++;
//
//	cout << "Person::count=" << Person::count << endl;
//
//	Person::sing();
//
//	Person *p1=new Person();
//	p1->name = "zhangsan";
//	p1->eat();
//	p1->sing();
//	cout<<"p1->count="<<p1->count;
//
//	Person p2 = Person("lisi",12);
//	p2.eat();
//	p2.sing();
//	cout<<"p1.count="<<p2.count;

	writeFile();
	readFile();

	return 0;

}

