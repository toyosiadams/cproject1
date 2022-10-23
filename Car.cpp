#include <iostream>
#include <iomanip>
#include "Car.h"
using namespace std;


Car::Car(string carmake, int yearmade)
{
	make = carmake;
	yearModel = yearmade;
	speed = 0;
}

void Car::setYearModel(int y)
{
	yearModel = y;
}

void Car::setMake(string m)
{
	make = m;
}

void Car::setSpeed(double s)
{
	speed = s;
}

int Car::getYearModel() const
{
	return yearModel;
}

string Car::getMake() const
{
	return make;
}

double Car::getSpeed() const
{
	return speed;
}

double Car::accelerate()
{
	return speed += 5;
}

double Car::brake()
{
	return speed -= 5;
}
