#include <iostream>
#include <string>
#include "TXLib.h"

int main()
{
    std::string str;

    std::cout << "Enter thickness (1 - lean, 2 - inflated, 3 - fat)" << std::endl;
    std::cin >> str;

    int n;
    try {
        n = std::atoi(str.c_str());
    } catch (...) {
        std::cout << "Error!" << std::endl;
    }

    txCreateWindow (600, 600);
    HDC kartinka;

    switch (n) {
    case 1:
        kartinka = txLoadImage ("lean.bmp");
        txBitBlt (txDC(), 0, 0, txGetExtentX(), txGetExtentY(), kartinka, 0, 0);
        break;
    case 2:
        kartinka = txLoadImage ("inflated.bmp");
        txBitBlt (txDC(), 0, 0, txGetExtentX(), txGetExtentY(), kartinka, 0, 0);
        break;
    case 3:
        kartinka = txLoadImage ("fat.bmp");
        txBitBlt (txDC(), 0, 0, txGetExtentX(), txGetExtentY(), kartinka, 0, 0);
        break;
    default:
        exit(1);
    }

    txDeleteDC(kartinka);
    return 0;
}
