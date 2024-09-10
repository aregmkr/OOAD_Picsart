#include <iostream>
#include "file.h"

File::File(const int size, const std::string& name) : size_{size}, name_{name} {}

int File::getSize() const {
	return size_;
}

std::string File::getName() const {
	return name_;
}

