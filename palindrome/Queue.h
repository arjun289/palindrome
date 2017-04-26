#pragma once
#include <iostream>
using namespace std;

class Queue
{
private:
	int front, back, size, capacity;
	char* queuearr;
	int isEmpty();
	int isFull();
public:
	Queue(int);
	void enqueue(char);  // method to enter data into the queue
	char dequeue();  // mthod to remove data from the queue
	~Queue();
};

