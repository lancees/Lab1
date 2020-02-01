// Lance E. Sander
// Programming Fundamentals III - Data Structures
#include <iostream>
#include <string>
#include "Color.h"
#include <algorithm>    // std::max

template <class ElementType>
ElementType maxArray(ElementType a[], int asize) {
    if (asize == 1) {
        return a[0];
    } else {
        int quotient = asize / 2; // remainder will be done by 2nd loop
        ElementType lefthalf[quotient]; // first half may be fewer
        for (int i =0; i < quotient; i++) { // end loop at quotient
            lefthalf[i] = a[i];
        }
        ElementType righthalf[asize-quotient]; // second half is equal or +1
        for (int i =quotient; i < asize; i++) { // pickup remaining  elements
            righthalf[i-quotient] = a[i];
        }
        return std::max(maxArray(lefthalf, quotient), maxArray(righthalf, asize-quotient));
    }
}

int main()
{
    int myints[7] = {6,7,92, 8, 9, 10, 4};
    std::cout << maxArray(myints, sizeof(myints)/sizeof(myints[0])) << std::endl;

    std::string mystrings[6] = {"a", "b", "c", "z", "e", "k"};
    std::cout << maxArray(mystrings, sizeof(mystrings)/sizeof(mystrings[0])) << std::endl;

    double mydoubles[3] = {1.1, 3.4, 2.6};
    std::cout << maxArray(mydoubles, sizeof(mydoubles)/sizeof(mydoubles[0])) << std::endl;

    // wanted to compare colors but unsure how to implement MAX custom to my Color
}
