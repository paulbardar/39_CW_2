

#include <iostream>
#include <set>
#include "Train.h"

using std::set;


int main()
{
    set<Train> Kyiv;

    Kyiv.insert(Train("123", "12:00", "Lviv"));
    Kyiv.insert(Train("110", "07:00", "Odesa"));
    Kyiv.insert(Train("101", "08:30", "Lutsck"));
    Kyiv.insert(Train("105", "17:20", "Kharkiv"));
    Kyiv.insert(Train("145", "12:00", "Poltava"));


    set<Train>::iterator p;
    for (p = Kyiv.begin(); p != Kyiv.end(); p++) {
        p->showInfo();

    }

    return 0;
}

