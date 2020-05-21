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
	cout << "相加结果为："<< endl;
	c3.display();
	cout << "相乘结果为：" << endl;
	c3 = c1 * c2;
	c3.display();
	v.inV();
	cout << "矩阵和向量相乘的结果为：" << endl;
	//m = c1 * v;
	v = c1 * v;
	v.display();
	system("pause");
}