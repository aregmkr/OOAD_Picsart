#include <iostream>
#include "file.h"
#include "directory.h"

int main() {
	Directory directory("Root");
	File* obj1 = new File(4, "test1");
	File* obj2 = new File(4, "test2");
	directory.addFile(obj1);
	directory.addFile(obj2);
	std::cout << directory.getName() << std::endl;
	std::cout << directory.getSize() << std::endl;
	return 0;
}
