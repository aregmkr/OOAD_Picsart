#include <string>
#include "vehicle.h"

class Car : public Vehicle {
public:
	Car();
	Car(const std::string brand, const std::string model);
	void setModel(const std::string& model);
	std::string getModel() const;
	void setBrand(const std::string& brand);
	std::string getBrand() const;
	void displayInfo() const;
private:
	std::string m_model;
	std::string m_brand;
};
