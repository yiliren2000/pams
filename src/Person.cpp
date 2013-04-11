#include <iostream>
#include<string>
using namespace std;

class Person {

	public:static int count;
	public:string name;
	private:int age;

	//构造函数
	public:Person(){
	}

	//析构函数
	~Person(){
	}

	public:Person(string name , int age){
		this->name = name;
		this->age = age;
	}

	public:void eat(){
		cout<<name<<"吃饭"<<endl;
	}

	public:static void sing(){
		cout<<"唱歌"<<endl;
	}
};
