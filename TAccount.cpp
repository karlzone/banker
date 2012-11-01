/*
 * TAccount.cpp
 *
 *  Created on: 28 Oct 2012
 *      Author: karsten
 */
#include <iostream>
#include <string.h>

#include "TCustomer.h"
#include "TAccount.h"

using namespace std;

/*TAccount::TAccount() {
	// TODO Auto-generated constructor stub
}*/

TAccount::~TAccount() {
	// TODO Auto-generated destructor stub
}

TAccount::TAccount(TCustomer *customerPtr, string accountNr, string pin) {
	customerPtr->addAccount(this);
	this->customerPtr = customerPtr;
	this->accountNr = accountNr;
	this->pin = pin;
	//TODO the amount of bookings
	this->sumOfBookings = 0;
}


string TAccount::getAccountNr() {
	return accountNr;
}

void TAccount::setAccountNr(string accountNr) {
	this->accountNr = accountNr;
}

TCustomer* TAccount::getCustomerPtr() {
	return customerPtr;
}

void TAccount::setCustomerPtr(TCustomer* customerPtr) {
	this->customerPtr = customerPtr;
}

string TAccount::getPin() {
	return pin;
}

void TAccount::setPin(string pin) {
	this->pin = pin;
}

int TAccount::getSumOfBookings() {
	return sumOfBookings;
}

void TAccount::setSumOfBookings(int sumOfBookings) {
	this->sumOfBookings = sumOfBookings;
}

void TAccount::print() {
	cout << "Account number:  " << accountNr << endl;
	cout << "Bookings:        " << sumOfBookings << endl;
	cout << "Balance:         " << "0.00 EUR" << endl;
}

void TAccount::printAccountNr() {
	cout << accountNr;
	cout.flush();
}
