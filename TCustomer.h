/*
 * TCustomer.h
 *
 *  Created on: 28 Oct 2012
 *      Author: karsten
 */

#ifndef TCUSTOMER_H_
#define TCUSTOMER_H_

//#include <stdio.h>
#include <string>

#include "TDate.h"


using namespace std;

class TCustomer {
private: 
	string name, street, streetnr, postcode, city;
	TDate birthday;
	//TODO amount of TAccounts
	//TODO array of pointers on TAccount
	
public:
	TCustomer();
	virtual ~TCustomer();
	TCustomer(string name, TDate birthday, string street, string streetnr, string postcode, string city);

	TDate getBirthday();
	void setBirthday(TDate birthday);
	string getCity();
	void setCity(string city);
	string getName();
	void setName(string name);
	string getPostcode();
	void setPostcode(string postcode);
	string getStreet();
	void setStreet(string street);
	string getStreetnr();
	void setStreetnr(string streetnr);

	void print();
};


#endif /* TCUSTOMER_H_ */
