void writeFile(){

	ofstream f("c:\\demo.txt");//���ļ�����д�����ļ������ھʹ�����

	if(!f){//����ļ����ܴ򿪣��򷵻�
		return;
	}

	f<<1234<<' '<<3.14<<'A'<<"How are you"<<endl; //д������
	f<<setw(20)<<"����"<<"������"<<endl;//ʹ�ò��������д�ļ�����
	f<<setw(20)<<"��ͥ��ַ"<<"����֣��"<<endl;

	f.close();//�ر��ļ�
}

void readFile(){
	ifstream f("c:\\demo.txt");//�����뷽ʽ���ļ�

	if(!f){//����ļ����ܴ򿪣��򷵻�
		return;
	}

	string s;
	while( getline(f,s))
	{
	 cout << s << endl ; //����̨���
	}

//	char c;
//	while((c=f.get())!=EOF)
//		cout<<c;//ע������������ж�
	f.close();
}


