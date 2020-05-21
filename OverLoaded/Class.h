#ifndef TDATE
#define TDATE
class Vector;
//矩阵类
class Class
{
public:
	Class();
	void inC();
	friend Class operator+(Class&c1,Class&c2);
	friend Class operator*(Class&c1,Class&c2);
	void display();
	//friend Vector;
    int num[3][3];
};

//向量类
class Vector
{
public:
	Vector();
	void inV();
	void display();
	friend Vector operator*(Class&c,Vector&v);
private:
	 int vec[3][1];
	 Class c;
};
/*
//矩阵和向量的乘法类
class Multiplication
{
public:
	friend Multiplication operator*(Class&c,Vector&c);
private:
	int M[3][1];
	Class c;
	Vector v;
};*/
#endif 


