#include "Class.h"
#include<iostream>
#include<iomanip>
using namespace std;

Class::Class(){
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++) {
            num[i][j] = 0;
        }        
    }
}
//ʵ�־������ӵ�����
Class operator+(Class&c1,Class&c2)
{
    Class c3;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
         c3.num[i][j] = c1.num[i][j] + c2.num[i][j];
        }
    }     
    return c3;
}
//ʵ�־��������
void Class::inC()
{
    cout << "�������飺"<<endl;
    for (int i = 0; i < 3; i++){
        cout << "��" << i+1 << "��" << endl;
        for (int j = 0; j < 3; j++) {
            cout << "��" << j+1 << "��" << endl;
            cin >> num[i][j];
        }
    }      
     
}
//����Ĵ�ӡ
void Class::display()
{
    int i, j;
    for (i = 0; i < 3; cout << endl, i++)
        for (j = 0; j < 3; cout << setw(4) << num[i][j] << ' ', j++);
}
//ʵ�־���ĳ˷�
 Class operator*(Class&c1,Class&c2)
{
     Class c3;
     int sum;
     for (int i = 0; i < 3; i++)
         for (int j = 0; j < 3; j++)
         {
             sum = 0;
             for (int t = 0; t < 3; t++)
             {
                 sum += c1.num[i][t] * c2.num[t][j];
             }
             c3.num[i][j] = sum;
         }

     return c3;
}
 Vector::Vector()
 {
     for (int i = 0; i < 3; i++) {
         for (int j = 0; j < 1; j++) {
             vec[i][j] = 0;
         }
     }
 }
//ʵ������������
void Vector::inV() 
{
    cout << "��������:" << endl;
    for (int i = 0; i < 3; i++) {
        cout << "��" << i+1 << "��" << endl;
        for (int j = 0; j < 1; j++) {
            cout << "��" << j+1 << "��" << endl;
            cin>>vec[i][j];
        }
    }
}
Vector operator*(Class& c, Vector& v) {
    Vector v1;
    int sum;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
        {
            sum = 0;
            for (int t = 0; t < 3; t++)
            {
                sum += c.num[i][t] * v.vec[t][j];
            }
            v1.vec[i][j] = sum;
        }
    return v1;
}
void Vector::display() 
{
    int i, j;
    for (i = 0; i < 3; cout << endl, i++)
        for (j = 0; j < 1; cout << setw(4) << vec[i][j] << ' ', j++);
}

/*
//������������
Multiplication operator*(Class&c,Vector&v) 
{
    Multiplication m;
    int sum;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
        {
            sum = 0;
            for (int t = 0; t < 3; t++)
            {
                sum += c.num[i][t] * v.vec[t][j];
            }
            m.M[i][j] = sum;
        }
    return m;
}
*/