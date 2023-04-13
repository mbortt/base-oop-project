#include <iostream>
#include "bus h.cpp"
#include <string>
#include "manager.h"


using namespace std;



int main() {
	Bus bus1("MAZ",14000, 10, "1234PM7");
	

	Bus bus2("PAZ", 23500, 15, "2345PM7");

	Bus bus3("Mercedes Benz", 21650, 17, "3456PM7");

	Bus bus4("Scania", 45000, 30, "4567PM7");

	Bus bus5("Neoplan", 113000, 87, "5678PM7");

	Bus buses[5];
	buses[0] = bus1;
	buses[1] = bus2;
    buses[2] = bus3;
    buses[3] = bus4;
    buses[4] = bus5;

	Manager manager;

	Bus result = manager.find_bus_with_min_price(buses, 5);

	cout << result.convert() << endl;

	return 0;
}