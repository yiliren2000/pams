void hello(){
	cout<<"hello world!"<<endl;
}

//ֵ����
void fun1(int a){
	a = 10;
}

//��ַ����
void fun2(int &a){
	a = 20;
}

//�����ռ�
namespace myspace{
    void print(){
		cout<<"�����ռ�!"<<endl;
	}
}
//ָ��
void testPoint(){
	int i=1;

	int *p = &i;

	//ָ������ڴ�
	char *p1 = new char[10];
	delete p1;//�ͷ�ָ��ָ����ڴ�
	p1 = NULL;//ָ��ָ��հ�

	char *p2=(char*)malloc(sizeof(char)*10);
	free(p2);//�ͷ�ָ��ָ����ڴ�
	p2 = NULL;//ָ��ָ��հ�

	cout<<"pָ���ַ��"<<p<<",*pָ�����ݣ�"<<*p<<endl;

	p++;

	cout<<"p++ָ���ַ��"<<p<<",*p++ָ�����ݣ�"<<*p<<endl;
}
//��ַ
void testAdd(){

	int i=1;
	char c = 'a';

	//cout������<<������֮һ���Ƕ�char*��const char*���͵����أ�
	//����char*ָ���ȥ��cout��ӡ�ַ�����
	cout << "����i�ĵ�ַ��"<<&i<<"���ַ��͵ĵ�ַ��"<<&c<<endl;

	cout << "����i�ĵ�ַ��"<<(void*)&i<<"���ַ��͵ĵ�ַ��"<<(void*)&c<<endl;

}
