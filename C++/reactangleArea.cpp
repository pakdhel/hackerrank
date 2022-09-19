#include <iostream>
using namespace std;
/*
 * Create classes Rectangle and RectangleArea
 */

class Rectangle{
public:
    int width, height;

    void display() {
        cout << Rectangle::width << " " << Rectangle::height << endl;
    }
};

class RectangleArea : public Rectangle{
public:
    void read_input() {
        cin >> Rectangle::width >> Rectangle::height;
    }

    void display() {
        cout << width * height << endl;
    }
};
