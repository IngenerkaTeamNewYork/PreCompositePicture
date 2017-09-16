#include <iostream>
#include "TXLib.h"

using namespace std;

int main()
{


    char thickness[20];

    cout << "Ââåäèòå òîëùèíó (1 - äîõëÿê, 2 - êà÷îê, 3 - ïîëíûé)" << endl;
    cin >> thickness;

    txCreateWindow ( 300 , 500 );
    HDC kartinka;

     if (strcmp(thickness, "1") == 0)
     {
    kartinka = txLoadImage ("òîùèé.bmp");
     txBitBlt (txDC(), 40, 0, txGetExtentX (), txGetExtentY (), kartinka , 0, 0);

     }

    if (strcmp(thickness, "2") == 0)
         {
         kartinka = txLoadImage ("êà÷îê.bmp");

         txBitBlt (txDC(), 40, 0, txGetExtentX (), txGetExtentY (), kartinka , 0, 0);

         }
     if (strcmp(thickness, "3") == 0)
     {
     kartinka = txLoadImage ("ïîëíûé.bmp");

     txBitBlt (txDC(), 40, 0, txGetExtentX (), txGetExtentY (), kartinka , 0, 0);

     }

    //cout << "str=" << str;
     txDeleteDC ( kartinka);

    return 0;

}
