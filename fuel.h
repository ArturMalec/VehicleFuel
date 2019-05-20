#ifndef FUEL_H_
#define FUEL_H_
#include <iostream>

class Vehicle
{
public:
	virtual void combustion(int x) = 0;
	virtual void max_fuelAmount() = 0;
	virtual ~Vehicle() {}
protected:
	int comb;
	int maxfuel;
};

class Car : public Vehicle
{
public:
	virtual void combustion(int x);
	virtual void max_fuelAmount();
};

class Truck : public Vehicle
{
public:
	virtual void combustion(int x);
	virtual void max_fuelAmount();
};

class Bus : public Vehicle
{
public:
	virtual void combustion(int x);
	virtual void max_fuelAmount();
	void max_passengers();
private:
	int maxp;
};
#endif /* FUEL_H_ */
