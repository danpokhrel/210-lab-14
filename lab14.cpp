// COMSC-210 | Lab 14 | Dan Pokhrel
#include <iostream>
#include <iomanip>
using namespace std;

class Color {
private:
    char red;
    char green;
    char blue;
public:
    // Getters and Setters
    char getRed() const {return red;}
    void setRed(char r) {red = r;}
    char getGreen() const {return green;}
    void setGreen(char g)  {green = g;}
    char getBlue() const {return blue;}
    void setBlue(char b) {blue = b;}

    // Formatted Output
    void print() {

    }
};

int main(){
    cout << "Hello World";

    return 0;
}