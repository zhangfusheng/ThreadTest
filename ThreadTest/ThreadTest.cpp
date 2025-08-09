// ThreadTest.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <thread>
#include <iostream>
using namespace std;

void f();  //函数

struct F {			//函数对象
	void operator()(); //F 的调用运算符
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
	thread t1{ f };			//f() 在独立的线程中执行
	thread t2{ F() };	//F()() 在独立的线程中执行

	t1.join();
	t2.join();
}



int main()
{
    return 0;
}

