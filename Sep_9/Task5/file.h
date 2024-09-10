#pragma once
#include "fileSystemObject.h"

class File : public fileSystemObject {
public:
	File(const int size, const std::string& name);
	int getSize() const override;
	std::string getName() const override;
private:
	int size_;
	std::string name_;
};
