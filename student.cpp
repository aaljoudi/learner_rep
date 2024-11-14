#include <iostream>
#include <cmath>

#include "wheel.cpp";

using namespace std;

class Tree {
    private:
        string color;
        double height;
        int age;

    public:
        Tree();
        void display();
        double calcWeight (double height, int age);
        void setColor(string c) { color = c; }
        void setHeight(double h) { height = h; }
        string getColor() { return color; }
        double getHeight() { return height; }
};

Tree::Tree() {
    color = "Green";
    height = 1.1;
    age = 1;
}

void Tree::display() {
    cout << "Tree" << endl;
    cout << "***" << endl;
    for (int i = 0; i < 4; i++) {
        cout << "|" << endl;
    }
    cout << "_____" << endl;
}

double Tree::calcWeight(double height, int age) {
    return pow(height, age) + 3.673;   
}

int main() {
    Tree dandy;

    dandy.setColor("Olive");
    dandy.setHeight(34.78);
    string c = dandy.getColor();
    double h = dandy.getHeight();

    cout << dandy.calcWeight(h, 2) << endl;
}