// COMSC-210 | Lab 14 | Dan Pokhrel
#include <iostream>
#include <iomanip>
#include <vector>
#include <cstdlib>
using namespace std;

const int COUNT = 5;
const int COLOR_MAX = 255;

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
        cout << left;
        cout << "r:" << setw(3) << (int)red << " | ";
        cout << "g:" << setw(3) << (int)green << " | ";
        cout << "b:" << setw(3) <<(int)blue << "\n";
    }
};

int main(){
    vector<Color> colors;

    // Genereate Data
    for (int i = 0; i < COUNT; i++){
        Color tmp;
        tmp.setRed(rand()%COLOR_MAX);
        tmp.setGreen(rand()%COLOR_MAX);
        tmp.setBlue(rand()%COLOR_MAX);
        colors.push_back(tmp);
    }

    cout << "Outputing Color Values:\n";

    // Print Data
    for (Color color : colors){
        color.print();
    }


    return 0;
}