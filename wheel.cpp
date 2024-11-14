#include "wheel.h"

using namespace std;

Wheel::Wheel (double d, string c) {
    diameter = d;
    color = c;
}

void Wheel::setDiameter (double d) {
    diameter = d;
}

void Wheel::setColor (string c) {
    color = c;
}

double Wheel::getDiameter () {
    return diameter;
}

string Wheel::getColor () {
    return color;
}