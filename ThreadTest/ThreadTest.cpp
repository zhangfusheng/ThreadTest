// ThreadTest.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <thread>
#include <iostream>
using namespace std;

void f();  //����

struct F {			//��������
	void operator()(); //F �ĵ��������
};

void F::operator()() {
	cout << "Parallel World!\n";
}

void f()
{
	cout << "Hello";
}

void user()
{
	thread t1{ f };			//f() �ڶ������߳���ִ��
	thread t2{ F() };	//F()() �ڶ������߳���ִ��

	t1.join();
	t2.join();
}



int main()
{
    return 0;
}

