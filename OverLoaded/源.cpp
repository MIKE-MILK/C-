#include<iostream>
#include"Class.h"
using namespace std;
int main() 
{
	Class c1,c2,c3;
	//Multiplication m;
	Vector v;
	c1.inC();
	c1.display();
	c2.inC();
	c2.display();
	c3 = c1 + c2;
	cout << "��ӽ��Ϊ��"<< endl;
	c3.display();
	cout << "��˽��Ϊ��" << endl;
	c3 = c1 * c2;
	c3.display();
	v.inV();
	cout << "�����������˵Ľ��Ϊ��" << endl;
	//m = c1 * v;
	v = c1 * v;
	v.display();
	system("pause");
}