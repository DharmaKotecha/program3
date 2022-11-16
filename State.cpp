// Ordered lists
// Author: Dharma
// Date: 5/11/2022

#include "State.h"
#include <string>
#include <cmath>
#include <iostream>

State::State()
{
    m_name = "";
}

State::State(string name, double energy, long long int size)
{
    m_name = name;
    m_energy = energy * 1000000000000; // input of energy in trillions of BTUs
    m_size = size;
}

string State::getName()
{
    return m_name;
}

double State::getEnergy()
{
    return m_energy;
}

long long int State::getSize()
{
    return m_size;
}

double State::getPercentage()
{
    return m_percentage;
}

double State::findPercentage()
{
    double panelsNeeded = ceil ((m_energy ) / 51);
    double panelArea = panelsNeeded * 18;

    // calculate percentage based on state's land mass
    m_percentage = ceil( (panelArea / m_size) * 100) ;

    // calculate percentage on total U.S. land mass
    // m_percentage = ceil( (panelArea / 2.087e14) * 100 );

    // calculate percentage based on earth's land mass
    // m_percentage = ceil( (panelArea / 2.036e20) * 100 );

    return m_percentage;
}
