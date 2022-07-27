#include <iostream>
#include <conio.h>
#include <string>
using namespace std;
//初始元素

char A;


int main() {
	cout << "欢迎使用" << endl;
	cout << "请问需要查询什么问题？" << endl;
	
	string say;
	//监测输入内容
	cin >> say;
	say = _getch();
	//输入A弹出问题答案
	cout << "请输出A查询" << endl;
	cin >> A;

	A = _getch();
	if (A = _getch()) {
		cout << "为什么不问问神奇海螺呢？" << endl;
	}
	
	system("pause");
	return 0;

}
	