void writeFile(){

	ofstream f("c:\\demo.txt");//打开文件用于写，若文件不存在就创建它

	if(!f){//如果文件不能打开，则返回
		return;
	}

	f<<1234<<' '<<3.14<<'A'<<"How are you"<<endl; //写入数据
	f<<setw(20)<<"姓名"<<"廉东方"<<endl;//使用插入运算符写文件内容
	f<<setw(20)<<"家庭地址"<<"河南郑州"<<endl;

	f.close();//关闭文件
}

void readFile(){
	ifstream f("c:\\demo.txt");//以输入方式打开文件

	if(!f){//如果文件不能打开，则返回
		return;
	}

	string s;
	while( getline(f,s))
	{
	 cout << s << endl ; //控制台输出
	}

//	char c;
//	while((c=f.get())!=EOF)
//		cout<<c;//注意结束条件的判断
	f.close();
}


