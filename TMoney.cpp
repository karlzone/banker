/*
 * TMoney.cpp
 *
 *  Created on: 18 Oct 2012
 *      Author: karsten
 */

#include <iostream>

#include "TMoney.h"

using namespace std;

TMoney::TMoney() {
	// TODO Auto-generated constructor stub
	this->amount = 0;
	this->currency = "EURO";
}

TMoney::~TMoney() {
	// TODO Auto-generated destructor stub
}

TMoney::TMoney(double x) {
	this->amount = x;
	this->currency = "EURO";
}

void TMoney::setAmount(double x) {
	this->amount = x;
}

double TMoney::getAmount() {
	return amount;
}

void TMoney::setCurrency(string cur) {
	this->currency = cur;
}

string TMoney::getCurrency() {
	return currency;
}

void TMoney::print() {
	//TODO cout.Precision(2) and fixed flag for amount values
	cout << amount << currency;

}
