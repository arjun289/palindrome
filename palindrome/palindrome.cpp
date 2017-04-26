// palindrome.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Stack.h"
#include "Queue.h"
#include <fstream>
#include <string>
#include <sstream>
#include <ctype.h>
#include <conio.h>


int main()
{
	ifstream file;
	

	file.open("check.txt",ios::in);
	string line;
	
	if (file.is_open()) {
		while (getline(file, line)) {
			
			Stack* st = new Stack(100);
			Queue* q = new Queue(100);

			string resultStr = "";
			int flag = 0;
			cout << line << endl;

			// to convert all the character to lowercase
			for (int i = 0; i < line.size(); ++i)
			{	
				line[i] = tolower(line[i]);
			}

			// to remove punctuation and space in between characters
			for (int i = 0; i < line.size(); ++i) {
				if (line[i]!= ' ' && !ispunct(line[i]))
					resultStr += line[i];
			}

			//cout << resultStr << endl;


			//logic to reverse the string through stack and comparing it with normal in queue 
			// to check if it's a palindrome

			for (int i = 0; i < resultStr.size(); ++i) {
					st->push(resultStr[i]);
					q->enqueue(resultStr[i]);
			}

			for (int i = 0; i < resultStr.size(); ++i) {
				
				if ( st->pop() == q->dequeue()) {
					flag = 1;
				}
				else
				{
					//cout << "not a palindrome" << endl;
					flag = 0;
					break;
				}
			}

			if (flag == 1) {
				cout << "Yes" << endl;
			}

			else
				cout << "No" << endl;

			
		}
	}

	else
		cout << "failed to open" << endl;


	_getch();
    return 0;
}

