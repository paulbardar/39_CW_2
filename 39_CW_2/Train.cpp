#include "Train.h"

Train::Train()
{
    number = "Underfined";
    departure = "Underfined";
    station = "Underfined";
}

Train::Train(string number, string departure, string station)
{
    this->number = number;
    this->departure = departure;
    this->station = station;
}

string Train::getNumber() const
{
    return number;
}

string Train::getDeparture() const
{
    return departure;
}

string Train::getStation() const
{
    return station;
}

void Train::setNumber(string number)
{
    this->number = number;
}

void Train::setDeparture(string departure)
{
    this->departure = departure;
}

void Train::setStation(string station)
{
    this->station = station;
}

bool Train::operator<(const Train& obj) const&
{

    if (this->departure < obj.departure) return true;
    else if (this->departure == obj.departure) return this->number < obj.number;
    else return false;
}

void Train::showInfo() const
{
    cout << number << " " << departure << " " << station << endl;
}
