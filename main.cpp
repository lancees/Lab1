// Example program
#include <iostream>
#include <string>
#include <algorithm>    // std::max

int r(int a[], int asize) {
    if (asize == 1) {
        return a[0];
    } else {
        int quotient = asize / 2; // remainder will be done by 2nd loop
        int lefthalf[quotient]; // first half may be fewer
        for (int i =0; i < quotient; i++) { // end loop at quotient
            lefthalf[i] = a[i];
        }
        int righthalf[asize-quotient]; // second half is equal or +1
        for (int i =quotient; i < asize; i++) { // pickup remaining  elements
            righthalf[i-quotient] = a[i];
        }
        return std::max(r(lefthalf, quotient), r(righthalf, asize-quotient));
    }
}

int main()
{
    int myarray[7] = {6,7,92, 8, 9, 10, 4};
    std::cout << "hello" << std::endl << r(myarray, sizeof(myarray)/sizeof(myarray[0])) << std::endl;
}