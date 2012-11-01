///////////////////////////////////////////////////////////
//  TBank.cpp
//  Implementation of the Class TBank
//  Created on:      01-Nov-2012 18:19:11
//  Original author: Runge
///////////////////////////////////////////////////////////

#include "TBank.h"


TBank::TBank(string Name, unsigned BLZ){
	this->name;
	this->BLZ;
}

void TBank::setAccountCounter(int accountCounter) {
	this->accountCounter = accountCounter;
}

static const TAccount**& TBank::getAccountList() const {
	return accountList;
}

unsigned TBank::getBlz() const {
	return BLZ;
}

void TBank::setBlz(unsigned blz) {
	BLZ = blz;
}

const string& TBank::getName() const {
	return name;
}

void TBank::setName(const string& name) {
	this->name = name;
}

void print(){

}
TBank::~TBank(){

}
