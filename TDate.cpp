///////////////////////////////////////////////////////////
//  TDate.cpp
//  Implementation of the Class TDate
//  Created on:      11-Okt-2012 21:16:58
//  Original author: Runge
///////////////////////////////////////////////////////////

#include "TDate.h"

#include <time.h>
#include <stdio.h>


TDate::~TDate(){

}
TDate::TDate(){
	time_t Zeitstempel;
	tm *now;
	Zeitstempel = time(0);
	now = localtime(&Zeitstempel);
	year = now->tm_year+1900;
	month = now->tm_mon+1;
	day = now->tm_mday;
}
TDate::TDate(int day, int month, int year){
	this->year=year;
	this->month=month;
	this->day=day;
}


void TDate::print(){

	printf("%02d.%02d.%04d", day, month, year);
}

int TDate::getDay() const {
	return day;
}

void TDate::setDay(int day) {
	//TODO set limits for day (1-28/29/30/31) depending on month and year.
	this->day = day;
}

int TDate::getMonth() const {
	return month;
}

void TDate::setMonth(int month) {
	//TODO set limits for month (1-12).
	this->month = month;
}

int TDate::getYear() const {
	return year;
}

void TDate::setYear(int year) {
	//TODO set limits for year (0-9999).
	this->year = year;
}