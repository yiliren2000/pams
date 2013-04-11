void hello(){
	cout<<"hello world!"<<endl;
}

//值传递
void fun1(int a){
	a = 10;
}

//地址传递
void fun2(int &a){
	a = 20;
}

//命名空间
namespace myspace{
    void print(){
		cout<<"命名空间!"<<endl;
	}
}
//指针
void testPoint(){
	int i=1;

	int *p = &i;

	//指针分配内存
	char *p1 = new char[10];
	delete p1;//释放指针指向的内存
	p1 = NULL;//指针指向空白

	char *p2=(char*)malloc(sizeof(char)*10);
	free(p2);//释放指针指向的内存
	p2 = NULL;//指针指向空白

	cout<<"p指针地址："<<p<<",*p指针内容："<<*p<<endl;

	p++;

	cout<<"p++指针地址："<<p<<",*p++指针内容："<<*p<<endl;
}
//地址
void testAdd(){

	int i=1;
	char c = 'a';

	//cout重载了<<，其中之一就是对char*或const char*类型的重载，
	//传个char*指针过去，cout打印字符串。
	cout << "整型i的地址："<<&i<<"，字符型的地址："<<&c<<endl;

	cout << "整型i的地址："<<(void*)&i<<"，字符型的地址："<<(void*)&c<<endl;

}
