#include <iostream>
#include<string>
using namespace std;

class Person {

	public:static int count;
	public:string name;
	private:int age;

	//���캯��
	public:Person(){
	}

	//��������
	~Person(){
	}

	public:Person(string name , int age){
		this->name = name;
		this->age = age;
	}

	public:void eat(){
		cout<<name<<"�Է�"<<endl;
	}

	public:static void sing(){
		cout<<"����"<<endl;
	}
};
