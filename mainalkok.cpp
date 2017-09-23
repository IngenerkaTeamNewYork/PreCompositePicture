#include <iostream>
#include "TXLib.h"

using namespace std;

void drawFaceKachok();
void drawFaceDohlyak();
void drawFacePolniy();
void sinyalk();
void hair();
void lyusyu();
void irokez();
void erorr();


int main()
    {
    char thicknessBody[2];
    char thicknessFace[2];
    char Sinyk[2];
    char Hair[2];

    cout << "Choose Human  (1 - Dohlyak, 2 - Kachok, 3 - Polniy)" << endl;
    cin >> thicknessBody;
    cout << "Choose Face  (1 - Dohlyak, 2 - Kachok, 3 - Polniy)" << endl;
    cin >> thicknessFace;
    cout << "Choose Sinyk  (1 - left glas, 2 - right glas, 3 - 2 glasa, 4 - havn't)" << endl;
    cin >> Sinyk;
    cout << "Choose HairStyle  (1 - Hair, 2 - Irokez, 3 - 2 Lyusyu)" << endl;
    cin >> Hair;

    if (strcmp (thicknessFace, "2") == 0 and strcmp (Hair, "1") == 0)
    if (strcmp (thicknessFace, "2") == 0 and strcmp (Hair, "2") == 0)
    {
        cout << "Kachok ne mozhet byut` volasatyum(vy DURAK!!)";
        return 0;
    }
    if (strcmp (thicknessFace, "2") == 0 and strcmp (Hair, "1") == 0)
    {
        cout << "Kachok ne mozhet byut` volasatyum(vy DURAK!!)";
        return 0;
    }
    txCreateWindow (1000 , 600);
    HDC kartinka;

    if (strcmp (thicknessBody, "1") == 0)
    {
        kartinka = txLoadImage ("Dohlyak.bmp");
        txBitBlt (txDC(), 40, 0, txGetExtentX (), txGetExtentY (), kartinka , 0, 0);
    }

    if (strcmp (thicknessBody, "2") == 0)
    {
        kartinka = txLoadImage ("Kachok.bmp");
        txBitBlt (txDC(), 40, 0, txGetExtentX (), txGetExtentY (), kartinka , 0, 0);
    }

    if (strcmp (thicknessBody, "3") == 0)
    {
        kartinka = txLoadImage ("Polniy.bmp");
        txBitBlt (txDC(), 40, 0, txGetExtentX (), txGetExtentY (), kartinka , 0, 0);
    }

    if (strcmp (thicknessFace, "1") == 0)
    {
        drawFaceDohlyak();
    }
    if (strcmp (thicknessFace, "2") == 0)
    {
        drawFaceKachok();
    }
    if (strcmp (thicknessFace, "3") == 0)
    {
        drawFacePolniy();
    }

    if (strcmp (Sinyk, "1") == 0)
        {

            txSetFillColor (TX_PINK);
            txCircle (200, 500, 50);
        }

        if (strcmp (Sinyk, "2") == 0)
        {
            txSetFillColor (TX_PINK);
            txCircle (200, 500, 50);
        }

        if (strcmp (Sinyk, "3") == 0)
        {
           txSetFillColor (TX_PINK);
            txCircle (200, 500, 50);
           }


    if (strcmp (Hair, "1") == 0)
        {

         hair();
        }

        if (strcmp (Hair, "2") == 0)
        {
        irokez();
        }

        if (strcmp (Hair, "3") == 0)
        {
         lyusyu();
        }



    txDeleteDC (kartinka);

    return 0;

}




void drawFacePolniy()
{
txCircle(350,500,100);
txCircle(350,500,110);
txCircle(350,500,120);


}
void drawFaceDohlyak()
{
txSetFillColor (TX_PINK);

txCircle(350,500,50);


}

void drawFaceKachok()
{
txRectangle(330,100,400,200);
}
void irokez()
{
txRectangle(320,420,350,450);
}
void lyusyu()
{
    //No body
}
void hair()
{
 txRectangle(320,420,330,440);
}
void sinyalk()
{
txCircle (200, 500, 50);
}

