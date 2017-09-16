#include <iostream>
#include "TXLib.h"

using namespace std;

int main()
{


    char str[20];

    cout << "¬ведите толщину (1 - дохл€к, 2 - качок, 3 - полный)" << endl;
    cin >> str;

    txCreateWindow ( 300 , 500 );
    HDC kartinka;

     if (strcmp(str, "1") == 0)
     {
    kartinka = txLoadImage ("E:\\домашн€€работа\\фоторобот\\тощий.bmp");
     txBitBlt (txDC(), 40, 0, txGetExtentX (), txGetExtentY (), kartinka , 0, 0);

     }

    if (strcmp(str, "2") == 0)
         {
         kartinka = txLoadImage ("E:\\домашн€€работа\\фоторобот\\качок.bmp");

         txBitBlt (txDC(), 40, 0, txGetExtentX (), txGetExtentY (), kartinka , 0, 0);

         }
     if (strcmp(str, "3") == 0)
     {
     kartinka = txLoadImage ("E:\\домашн€€работа\\фоторобот\\полный.bmp");

     txBitBlt (txDC(), 40, 0, txGetExtentX (), txGetExtentY (), kartinka , 0, 0);

     }

    //cout << "str=" << str;
     txDeleteDC ( kartinka);

    return 0;

}
