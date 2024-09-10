#include <iostream>
#include "directory.h"

Directory::Directory(const std::string& name) : name_{name}, cap_{20}, count_{0}{
	files = new File*[cap_];
}

Directory::~Directory() {
	for (int i = 0; i < count_; ++i) {
		delete files[i];
	}
	delete[] files;
}

void Directory::addFile(File* file) {
	if (count_ >= cap_) {
		cap_ *= 2;
		File** tmpfiles = new File*[cap_];
		for (int i = 0; i < count_; ++i) {
			tmpfiles[i] = files[i];
		}
		delete[] files;
		files = tmpfiles;
	}
	files[count_] = file;
	count_++;
}

int Directory::getSize() const {
	int total = 0;
	for (int i = 0; i < count_; ++i) {
		total += files[i]->getSize();
	}
	return total;
}

std::string Directory::getName() const {
	return name_;
}
