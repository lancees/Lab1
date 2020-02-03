//
// Created by Lance Sander on 2/1/20.
//
#include <string>

#ifndef LAB1_COLOR_H
#define LAB1_COLOR_H


class Color {
private:
    int colorID;

public:
    static const int RED = 1;
    static const int ORANGE = 2;
    static const int YELLOW = 3;
    static const int GREEN = 4;
    static const int BLUE = 5;
    static const int VIOLET = 6;
    int hz[6] = {RED, ORANGE, YELLOW, GREEN, BLUE, VIOLET};

    Color() {}

    Color(int colorInt) {
       colorID = colorInt;
    }
    int getColorID() {
        return colorID;
    }

    std::string colorName() {
        std::string colorName;
        switch (getColorID()) {
            case Color::RED:
                colorName = "red";
                break;

            case Color::ORANGE:
                colorName = "orange";
                break;

            case Color::YELLOW:
                colorName = "yellow";
                break;

            case Color::GREEN:
                colorName = "green";
                break;

            case Color::BLUE:
                colorName = "blue";
                break;

            case Color::VIOLET:
                colorName = "violet";
                break;
        }
        return colorName;
    }

    int hzOrder () {return colorID;}
};


#endif //LAB1_COLOR_H
