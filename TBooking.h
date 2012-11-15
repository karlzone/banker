/*
 * TBooking.h
 *
 *  Created on: 1 Nov 2012
 *      Author: karsten
 */

#ifndef TBOOKING_H_
#define TBOOKING_H_

#include <iostream>
#include <string.h>

#include "TDate.h"
#include "TMoney.h"
#include "TTime.h"

using namespace std;

class TAccount;

class TBooking {
private:
	TMoney amount;
	TAccount* sourcePtr;
	TAccount* destinPtr;
	TDate date;
	TTime time;
	string comment;
	bool printed;

public:
	TBooking(TMoney, TAccount*, TAccount*, TDate, TTime, string);
	virtual ~TBooking();
	bool isPrinted() const;
	void setPrinted(bool printed);
	void print();
};

#endif /* TBOOKING_H_ */
