/*
 * TCustomer.cpp
 *
 *  Created on: 28 Oct 2012
 *      Author: karsten
 */

#include <iostream>
#include <string>

#include "TAccount.h"
#include "TCustomer.h"

using namespace std;

TCustomer::~TCustomer() {
	// TODO Auto-generated destructor stub
}

TCustomer::TCustomer(string name, TDate birthday, string street,
		string streetnr, string postcode, string city) {
	this->name = name;
	this->street = street;
	this->streetnr = streetnr;
	this->postcode = postcode;
	this->city = city;
	this->birthday = birthday;
	this->sumOfTAccounts = 0;
//	accountPtr[0] = getAccountPtr();
}

TDate TCustomer::getBirthday() {
	return birthday;
}

void TCustomer::setBirthday(const TDate birthday) {
	this->birthday = birthday;
}

string TCustomer::getCity() {
	return city;
}

void TCustomer::setCity(string city) {
	this->city = city;
}

string TCustomer::getName() {
	return name;
}

void TCustomer::setName(string name) {
	this->name = name;
}

string TCustomer::getPostcode() {
	return postcode;
}

void TCustomer::setPostcode(string postcode) {
	this->postcode = postcode;
}

string TCustomer::getStreet() {
	return street;
}

void TCustomer::setStreet(string street) {
	this->street = street;
}

string TCustomer::getStreetnr() {
	return streetnr;
}

void TCustomer::setStreetnr(string streetnr) {
	this->streetnr = streetnr;
}

TAccount* TCustomer::getAccountPtr(){
	return accountPtr[0];
}
/*
void TCustomer::setAccountPtr(TAccount* accountPtr) {
	this->accountPtr[0] = accountPtr;
}*/

int TCustomer::getSumOfTAccounts() {
	return sumOfTAccounts;
}
/*
<<<<<<< HEAD
void TCustomer::setSumOfTAccounts(int sumOfTAccounts) {
	this->sumOfTAccounts = sumOfTAccounts;
}*/

void TCustomer::print() {
	cout << name << endl;
	cout << street << endl;
	cout << postcode << " " << city << endl;
	cout << "born on: ";
	birthday.print();
	cout << endl;
	cout << "Accounts:" << endl;
	for (int i = 0; i < sumOfTAccounts; i++) {
		cout << "-  Account number:   " ;
		cout << "-  Account number:   ";
		//cout << i << endl;
		cout << accountPtr[i]->getAccountNr() << endl;
		//accountPtr[i] ->printAccountNr();
	}

}

void TCustomer::addAccount(TAccount* accountPtr) {
	this->accountPtr[sumOfTAccounts++] = accountPtr;
}
