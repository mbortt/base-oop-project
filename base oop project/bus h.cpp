#pragma once
#include "main.h"

using namespace std;

class Bus {
public:
	string number;
	int price;
	string brend;
	int place;
	Bus(){
		brend = "no brend";
		price = 0;
		place = 0;
		number = "XXXXPM7";
	}

	Bus(string brnd, int prc, int plc, string nmbr) {
		brend = brnd;
		price = prc;
		number = nmbr;
		place = plc;
	}

};