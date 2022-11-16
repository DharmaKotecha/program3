// Ordered lists
// Author: Dharma
// Date: 5/11/2022

#include <iostream>
#include <iomanip>
#include <string>
#include <list>
#include "State.h"
using namespace std;

void printPercentages (list <State> l)
{
   cout << endl << "State " << "Percentage of land used" << endl
                << "____\t" << "___________" << endl;

   for (auto it = l.begin(); it != l.end(); ++it)
   {
     cout << std :: left << std::setw(18) << (*it).getName() << "\t" << (*it).getPercentage() << endl;
   }
   cout << endl;
}

void add (list <State> &l, State &x)
{
   list < State > :: iterator it;
   list < State > :: iterator previous;

   if (l.empty() || ((l.front()).getPercentage() > x.getPercentage()))   // add to start on list
   {
      l.push_front(x);
   }

   else
    {
    previous = l.begin();     // find the correct location
    for (auto it = l.begin(); it != l.end(); ++ it) {
         if ((*it).getPercentage() > x.getPercentage())
            break;
         else
            previous = it;
    }

    l.insert(++previous,x); // add to correct position
   }
}

int main()
{
    list<State> states;

    State tx ("Texas     ", 13480.8, 7487580672000);
    tx.findPercentage();
    add (states, tx);

    State ca ("California", 6922.8, 4563554688000);
    ca.findPercentage();
    add (states, ca);

    State la ("Louisiana", 4200.4, 1445216256000);
    la.findPercentage();
    add(states, la);

    State il ("Illinois", 3612.9, 1614549657600);
    il.findPercentage();
    add (states, il);

    State pa ("Pennsylvania", 3413.0, 1283967590400);
    pa.findPercentage();
    add (states, pa);

    State oh ("Ohio", 3404.5, 1249649280000);
    oh.findPercentage();
    add (states, oh);

    State ny ("New York", 3354.2, 1520933990400);
    ny.findPercentage();
    add (states, ny);

    State ga ("Georgia", 2727.6, 1656673920000);
    ga.findPercentage();
    add (states, ga);

    State mi ("Michigan", 2610.6, 2696287334400);
    mi.findPercentage();
    add (states, mi);

    cout << endl;
    printPercentages (states);
    return 0;
}

