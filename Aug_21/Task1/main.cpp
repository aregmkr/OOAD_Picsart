#include <iostream>
#include "person_and_car.h"

int main() 
{
	Person obj;
    obj.setAge(18);
    obj.setName("Adolf");
    Car obj_car("Mercedes", "Gelandewagen");
    
    //obj_car.setBrand("Mercedes", "Geländewagen");
    obj.setCar(obj_car);
    obj.displayInfo();
	return 0;
}
