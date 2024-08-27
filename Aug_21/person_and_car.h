#ifndef PERSON_AND_CAR_H
#define PERSON_AND_CAR_H

#include <string>
#include <iostream>

class Car {
public:
    Car();
    Car(std::string name, std::string model);
    std::string getModel() const; 
    void setModel(std::string model);
    std::string getBrand() const; 
    void setBrand(std::string brand);
    void displayCarInfo() const;
private:
    std::string m_model;
    std::string m_brand;
};

class Person {
public:
    Person();
    Person(std::string name, size_t age, Car& car);
    std::string getName() const;
    size_t getAge() const;
    void setName(std::string name);
    void setAge(size_t age);
    void displayInfo() const;
    void setCar(Car& car);
private:
    std::string m_name;
    size_t m_age;
    Car& m_car;
};

// class Car 
// {
// public:
// 	Car();
// 	Car(std::string& name, std::string& model);
// 	void setModel(std::string& model);
// 	void setBrand(std::string& brand);
// 	std::string getModel() const;
// 	std::string getBrnad() const;
// 	void displayCarInfo() const;

// private:
// 	std::string m_model;
// 	std::string m_brand;
// };


// class Person 
// {
// public:
// 	Person();
// 	Person(std::string& name, size_t age, Car car);
// 	std::string getName() const;
// 	size_t getAge() const;
// 	void getCar(Car obj);
// 	void setName(std::string& name);
// 	void setAge(size_t age);
// 	void displayInfo() const;
// private:
// 	std::string m_name;
// 	size_t m_age;
// 	Car& m_car;
// };

#endif // PERSON_AND_CAR_H
