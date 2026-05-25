#pragma once
#include<iostream>
#include<string>
using std::cout;
using std::string;
using std::endl;
class Train
{

	string number;
	string departure;
	string station;


public:
	Train();
	Train(string number, string departure, string station);

	string getNumber()const;
	string getDeparture()const;
	string getStation()const;

	void setNumber(string number);
	void setDeparture(string departure);
	void setStation(string station);

	bool operator <(const Train& obj)const&;



	void showInfo()const;

	

};

