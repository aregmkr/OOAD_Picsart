#include <iostream>
#include <string>

class Vehicle {
public:
    Vehicle() : m_weight{0}, m_max_speed{0} {} 
    Vehicle(int weight, int max_speed) {
        m_weight = weight;
        m_max_speed = max_speed;
    }

    virtual void displayInfo() const {
        std::cout << "Weight is a " << m_weight << "kg"<< std::endl;
        std::cout << "Max speed is a " << m_max_speed << "k/h" << std::endl;
    }
protected:
    int m_weight;
    int m_max_speed;
};

class Car : public Vehicle {
public:
    Car() : fuel_type{" "} {}
    Car(int weight, int maxSpeed, const std::string& fuel_type2) : Vehicle(weight, maxSpeed),  fuel_type(fuel_type2){}
    void displayInfo() const override {
        Vehicle::displayInfo();
        std::cout << "Fuel type: " << fuel_type << std::endl;
    }
private:
    std::string fuel_type;
};

int main()
{
    Vehicle obj(100, 150);
    obj.displayInfo();

    Car obj2(1200, 124, "Regular");
    obj2.displayInfo();
    return 0;
} 
