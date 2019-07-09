#include "Stack.h"
#include <iostream>
#include <string>
using namespace std;

int main() {
	STACK<int> s1;
	s1.push(4);
	s1.push(6);
	s1.push(8);

	STACK<string> s2;
	//Move elements of stack 1 to stack 2
	while (!s1.isEmpty()) {
		s2.push(s1.pop());
	}
}