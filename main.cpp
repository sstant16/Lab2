#include <iostream>
#include "Process.hpp"

int main() {
	
	std::string fileName = "trace1.txt";

	Process *p = new Process(fileName);

	p->Run();

	delete p;

	return 0;

}