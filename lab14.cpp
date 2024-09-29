// COMSC-210 | Lab 14 | Dan Pokhrel
#include <iostream>
#include <iomanip>
#include <vector>
#include <cstdlib>
using namespace std;

const int COUNT = 5;

class Color {
private:
    unsigned char red;
    unsigned char green;
    unsigned char blue;
public:
    // Getters and Setters
    unsigned char getRed() const {return red;}
    void setRed(unsigned char r) {red = r;}
    unsigned char getGreen() const {return green;}
    void setGreen(unsigned char g)  {green = g;}
    unsigned char getBlue() const {return blue;}
    void setBlue(unsigned char b) {blue = b;}

    // Formatted Output
    void print() {
        cout << "Color: " << (int)red << "r | " << (int)green << "g | " << (int)blue << "b\n";
    }
};

int main(){
    vector<Color> colors;

    for (int i = 0; i < COUNT; i++){
        Color tmp;
        tmp.setRed(rand()%255);
    }

    return 0;
}