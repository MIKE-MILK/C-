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
//实现矩阵的相加的重载
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
//实现矩阵的输入
void Class::inC()
{
    cout << "输入数组："<<endl;
    for (int i = 0; i < 3; i++){
        cout << "第" << i+1 << "行" << endl;
        for (int j = 0; j < 3; j++) {
            cout << "第" << j+1 << "列" << endl;
            cin >> num[i][j];
        }
    }      
     
}
//结果的打印
void Class::display()
{
    int i, j;
    for (i = 0; i < 3; cout << endl, i++)
        for (j = 0; j < 3; cout << setw(4) << num[i][j] << ' ', j++);
}
//实现矩阵的乘法
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
//实现向量的输入
void Vector::inV() 
{
    cout << "输入向量:" << endl;
    for (int i = 0; i < 3; i++) {
        cout << "第" << i+1 << "行" << endl;
        for (int j = 0; j < 1; j++) {
            cout << "第" << j+1 << "列" << endl;
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
//矩阵和向量相乘
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