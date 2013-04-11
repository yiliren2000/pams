#include <iostream>
#include<string>
#include<fstream>
#include<iomanip>
using namespace std;

#include "myfunction.h"
using namespace myspace;

#include "FileOperate.h"
#include "Person.cpp"

#define pi 3.14;//定义宏

void dataType() {

	bool b;
	int i;
	float f;
	double d;
	char c;
	wchar_t w;

	printf("i是一个随机数%d\n", i);
	//		signed 有符号
	//		unsigned 无符号
	//		short 短型
	//		long 长型

	cout << sizeof(b) << sizeof(i) << sizeof(f) << sizeof(d) << sizeof(c)
			<< sizeof(w) << endl;

}

//枚举类型
enum Week {
	monday = 1, tuesday, wennesday, thursday, friday, saturday, sunday
};

int Person::count = 0;//初始化类的静态变量

int main() {

	//	io();
	//	dataType();

//	double i = pi;
//
//	cout << i << endl;
//
//	const double pai = 3.1415926;//常量
//
//	cout << pai << endl;
//
//	Week today = monday;
//
//	cout << today << endl;
//
//	//调用头文件函数
//	hello();
//
//	string str = "我爱北京天安门";
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
//	cout << "值传递" <<a<< endl;
//	fun2(a);
//	cout << "地址传递" <<a<< endl;
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

