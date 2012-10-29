/*
 * TCustomer.cpp
 *
 *  Created on: 28 Oct 2012
 *      Author: karsten
 */

#include <iostream>
#include <stdio.h>

#include "TCustomer.h"

using namespace std;

TCustomer::TCustomer() {
	// TODO Auto-generated constructor stub

}

TCustomer::~TCustomer() {
	// TODO Auto-generated destructor stub
}

TCustomer::TCustomer(string name, TDate birthday, string street, string streetnr,string postcode, string city) {
	this->name = name;
	this->street = street;
	this->streetnr = streetnr;
	this->postcode = postcode;
	this->city = city;
	this->birthday = birthday;
}

TDate TCustomer::getBirthday() {
	return birthday;
}

void TCustomer::setBirthday(const TDate birthday) {
	this->birthday = birthday;
}

string TCustomer::getCity(){
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

void TCustomer::print() {
	cout << name << endl;
	cout << street << endl;
	cout << postcode << " " << city << endl;
	cout << "born on: ";
	cout << birthday.print() << endl;
	cout << "Accounts:" << endl;
}



