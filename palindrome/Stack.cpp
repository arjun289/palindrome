#include "stdafx.h"
#include "Stack.h"

Stack::Stack(int n)
{
	top = -1;
	size = n;
	stackarr = new char[size];
}

void Stack::push(char data) {
	if (top >= size) {
		std::cout << "stack full";
		return;
	}
	stackarr[++top] = data;
}

char Stack::pop() {
	if (top < 0) {
		std::cout << "stack empty" << std::endl;
		return '\0';
	}

	return stackarr[top--];
}


Stack::~Stack()
{
}
