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
  

  
 
