#include <iostream>
#include <string>

using namespace std;

class Wheel {
    private:
        double diameter;
        string color;
    
    public:
        Wheel (double d, string c);
        void setDiameter (double d);
        void setColor (string c);
        double getDiameter();
        string getColor();
};