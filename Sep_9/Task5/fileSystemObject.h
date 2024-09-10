#pragma once

class fileSystemObject {
public:
	virtual int getSize() const = 0;
	virtual std::string getName() const = 0;
private:
	std::string name_;
};
