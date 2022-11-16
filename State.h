// Ordered lists
// Author: Dharma
// Date: 5/11/2022

#include <string>
using namespace std;

#ifndef STATE_H
#define STATE_H


class State
{
    public:
        State();
        State(string, double, long long int);

        string getName();
        double getEnergy();
        long long int getSize();
        double getPercentage();
        double findPercentage();

    protected:

    private:
        string m_name;
        double m_energy;
        long long int m_size;
        double m_percentage;
};

#endif // STATE_H

