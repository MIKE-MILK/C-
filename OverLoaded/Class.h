#ifndef TDATE
#define TDATE
class Vector;
//������
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

//������
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
//����������ĳ˷���
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


