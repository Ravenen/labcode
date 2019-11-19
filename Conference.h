#pragma once
#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;

class Conference
{
private:
	string name, city;
	int participants, price;
protected:
	string theme;
	int parkingPlaces;
public:
	int duration;
	string about;
	Conference(string _name, string _city, int _participants, int _price, string _theme, int _parkingPlaces);
	~Conference();
	string getName();
	string getCity();
	int getParticipants();
	int getPrice();
	void printInfo();
};

