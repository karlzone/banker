/*
 * TBooking.cpp
 *
 *  Created on: 1 Nov 2012
 *      Author: karsten
 */

#include "TBooking.h"

using namespace std;

TBooking::TBooking(TMoney amount, TAccount *sourcePtr, TAccount *destinPtr,
		TDate date, TTime time, string comment) {
	this->amount = amount;
	this->sourcePtr = sourcePtr;
	this->destinPtr = destinPtr;
	this->date = date;
	this->time = time;
	this->comment = comment;
	printed = false;
}

bool TBooking::isPrinted() const {
	return printed;
}

void TBooking::setPrinted(bool printed) {
	this->printed = printed;
}

void TBooking::print() {
	printed = true;

	//cout << date.print() <<"";
	//cout << amount.print() <<"";
	cout << sourcePtr << "";
	cout << comment << endl;

}

TBooking::~TBooking() {
	// TODO Auto-generated destructor stub
}

