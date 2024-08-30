#include <string>

class Vehicle {
public:
	Vehicle();
	Vehicle(const std::string& brand, const std::string& model);
	virtual void displayInfo() const;
protected:
	std::string m_model;
	std::string m_brand;
};
