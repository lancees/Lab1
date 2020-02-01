//
// Created by Lance Sander on 2/1/20.
//

#ifndef LAB1_COLOR_H
#define LAB1_COLOR_H


class Color {
    const int RED = 1;
    const int ORANGE = 2;
    const int YELLOW = 3;
    const int GREEN = 4;
    const int BLUE = 5;
    const int VIOLET = 6;
    int colorID;
    int hz[6] = {RED, ORANGE, YELLOW, GREEN, BLUE, VIOLET};

public:
    Color(int colorInt) {
       colorID = colorInt;
    }
    int hzOrder () {return colorID;}
    template<class T>
    const T& max(const T& a, const T& b)
    {
        return (a < b) ? b : a;
    }
};


#endif //LAB1_COLOR_H
