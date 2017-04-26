#include "stdafx.h"
#include "Queue.h"


Queue::Queue(int n)
{
	front = 0;
	back = n - 1;
	size = 0;
	capacity = n;
	queuearr = new char[capacity];
}

int Queue::isEmpty() {
	if (size == 0)
		return 1;
	else
		return 0;
}

int Queue::isFull() {
	if (size == capacity) {
		return 1;
	}
	else
		return 0;
}

void Queue::enqueue(char data) {

	if (isFull() == 1) {
		std::cout << "stack is full dequeue some items: " << std::endl;
	}

	back = (back + 1) % capacity;
	queuearr[back] = data;
	size++;
	return;
}

char Queue::dequeue() {
	if (isEmpty() == 1) {
		std::cout << "queue is empty" << std::endl;
		return -1;
	}
	char item = queuearr[front];
	front = (front + 1) % capacity;
	size--;
	return item;
}

Queue::~Queue()
{
}
