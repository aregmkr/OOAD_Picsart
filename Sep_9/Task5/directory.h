#pragma once
#include "fileSystemObject.h"
#include "file.h"

class Directory : public fileSystemObject {
public:
	Directory(const std::string& name);
	~Directory();
	void addFile(File* file);
	virtual int getSize() const override;
	virtual std::string getName() const override;
private:
	std::string name_;
	int cap_;
	int count_;
	File** files;
};
