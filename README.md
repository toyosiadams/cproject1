//Using object-oriented programming, I made an object named "Car" and used it to call the accelerate function, get the current speed of the car and display it. Then, call the brake function five times. After each call to the brake function, I got the current speed of the car and displayed it.



//source file 
#include <iostream>
#include <iomanip>
#include "Car.h"
#include <string>

using namespace std;
int main()
{

	Car Car("honda", 2022);
	for (int i = 0; i < 5; i++)
	{
		cout << "Current speed: " << Car.accelerate() << endl;
		cout << "Accelerating..." << endl;
	}

	for (int i = 1; i < 6; i++)
	{
		cout << "Current speed: " << Car.brake() << endl;
		cout << "Braking..." << endl;
	}
}
  
  
//.h file
  #include<iostream>
#include <string>
using namespace std;


class Car
{
private:
	string make;
	int yearModel;
	double speed;
public:
	Car(string, int);
	void setYearModel(int);
	void setMake(string);
	void setSpeed(double);
	int getYearModel() const;
	string getMake() const;
	double getSpeed() const;
	double accelerate();
	double brake();

};
  
  //.cpp file
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
