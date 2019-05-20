#include "fuel.h"

int main()
{
	Car osobowka;
	Truck ciezarowka;
	Bus autobus;
	int distance;
	std::cout << "Enter distance witch vehicle have to travel: ";
	std::cin >> distance;
	std::cout << "Distance to travel: " << distance << " km\n\n";

	Vehicle *wsk1 = new Car;
	wsk1->combustion(distance);
	wsk1->max_fuelAmount();
	delete wsk1;

	Vehicle * wsk2 = new Truck;
	wsk2->combustion(distance);
	wsk2->max_fuelAmount();
	delete wsk2;

	Vehicle * wsk3 = new Bus;
	wsk3->combustion(distance);
	wsk3->max_fuelAmount();
	autobus.max_passengers();
	delete wsk3;

	return 0;
}


