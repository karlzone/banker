/*
 * TMoney.h
 *
 *  Created on: 18 Oct 2012
 *      Author: karsten
 */

#ifndef TMONEY_H_
#define TMONEY_H_

//#include <stdio.h>
#include <string>

using namespace std;

class TMoney {
private:
	double amount;
	string currency;

public:
	TMoney();
	virtual ~TMoney();
	TMoney(double);

	void setAmount(double x);
	double getAmount();
	void setCurrency(string cur);
	string getCurrency();
	void print();
};

#endif /* TMONEY_H_ */
