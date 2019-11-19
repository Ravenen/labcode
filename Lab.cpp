#include <iostream>
#include <string>
#include "Conference.h"

using namespace std;

int main() {
	Conference A("Event A", "Lviv", 25, 350, "DevOps Engeneers", 30);
	A.about = "Let's talk about it";
	A.duration = 2;
	Conference B("Event B", "Kyiv", 120, 500, "How to be successful", 100);
	B.about = "That is success!";
	B.duration = 3;
	Conference C("Event C", "Chervonohrad", 60, 100, "We can improve out city", 50);
	C.about = "Make Chervonohrad great again!";
	C.duration = 5;

	cout << "Information about \"Event A\":" << endl;
	A.printInfo();
	cout << endl;
	cout << "Information about \"Event B\":" << endl;
	B.printInfo();
	cout << endl;
	cout << "Information about \"Event C\":" << endl;
	C.printInfo();
	cout << endl;
}