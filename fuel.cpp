#include "fuel.h"


void Car::combustion(int x)
{
	x /= 100;
	comb = x * 8;
	std::cout << "Small car combustion: " << comb <<  " L" << std::endl;
}

void Car::max_fuelAmount()
{
	maxfuel = 50;
	std::cout << "Max amount of fuel: " << maxfuel <<  " L" << std::endl;
	std::cout << "Is one tank enough for the traveled route?: ";
	if (comb < maxfuel)
		std::cout << " YES\n\n";
	else
		std::cout << " NO\n\n";
}

void Truck::combustion(int x)
{
	x /= 100;
	comb = x * 20;
	std::cout << "Truck combustion: " << comb << " L" << std::endl;
}

void Truck::max_fuelAmount()
{
	maxfuel = 110;
	std::cout << "Max amount of fuel: " << maxfuel <<  " L" << std::endl;
	std::cout << "Is one tank enough for the traveled route?: ";
	if (comb < maxfuel)
		std::cout << " YES\n\n";
	else
		std::cout << " NO\n\n";
}

void Bus::combustion(int x)
{
	x /= 100;
	comb = x * 24;
	std::cout << "Bus combustion: " << comb <<  " L" << std::endl;
}

void Bus::max_fuelAmount()
{
	maxfuel = 150;
	std::cout << "Max amount of fuel: " << maxfuel <<  " L" << std::endl;
	std::cout << "Is one tank enough for the traveled route?: ";
	if (comb < maxfuel)
		std::cout << " YES\n";
	else
		std::cout << " NO\n";
}

void Bus::max_passengers()
{
	maxp = 80;
	std::cout << "Max passengers in the bus: " << maxp << std::endl;
}


