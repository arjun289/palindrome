#pragma once
#include <iostream>
using namespace std;

class Stack
{
private:
	int top;
	int size;
	char* stackarr;
public:
	Stack(int);
	void push(char);   // function to push data into stack
	char pop();        // function to pop data from stack
	~Stack();
};

