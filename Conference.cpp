#include "Conference.h"

Conference::Conference(string _name, string _city, int _participants, int _price, string _theme, int _parkingPlaces) {
	name = _name;
	city = _city;
	participants = _participants;
	price = _price;
	theme = _theme;
	parkingPlaces = _parkingPlaces;
}

Conference::~Conference() {

}

string Conference::getCity() {
	return city;
}

string Conference::getName() {
	return name;
}

int Conference::getParticipants() {
	return participants;
}

int Conference::getPrice() {
	return price;
}

void Conference::printInfo() {
	cout << "\tName: " << getName() << endl;
	cout << "\tTheme: " << theme << endl;
	cout << "\tAbout: " << about << endl;
	cout << "\tCity: " << getCity() << endl;
	cout << "\tParticipants: " << getParticipants() << endl;
	cout << "\tPrice: $" << getPrice() << endl;
	cout << "\tDuration: " << duration << " hour(s)" << endl;
	cout << "\tParking places: " << parkingPlaces << endl;
}