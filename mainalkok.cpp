#include <iostream>
#include "TXLib.h"

using namespace std;

void drawFaceKachok();
void drawFaceDohlyak();
void drawFacePolniy();

int main()
    {
    char thicknessBody[2];
    char thicknessFace[2];

    cout << "Choose Human  (1 - Dohlyak, 2 - Kachok, 3 - Polniy)" << endl;
    cin >> thicknessBody;
    cout << "Choose Face  (1 - Dohlyak, 2 - Kachok, 3 - Polniy)" << endl;
    cin >> thicknessFace;

    txCreateWindow (1000 , 600);
    HDC kartinka;

    if (strcmp (thicknessBody, "1") == 0)
        {
        kartinka = txLoadImage ("Dohlyak.bmp");
        txBitBlt (txDC(), 40, 0, txGetExtentX (), txGetExtentY (), kartinka , 0, 0);

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

        }

    if (strcmp (thicknessBody, "2") == 0)
        {
        kartinka = txLoadImage ("Kachok.bmp");

        txBitBlt (txDC(), 40, 0, txGetExtentX (), txGetExtentY (), kartinka , 0, 0);


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

        }

    if (strcmp (thicknessBody, "3") == 0)
        {
        kartinka = txLoadImage ("Polniy.bmp");

        txBitBlt (txDC(), 40, 0, txGetExtentX (), txGetExtentY (), kartinka , 0, 0);


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


        }











    //cout << "str=" << str;
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
txCircle(350,500,50);


}

void drawFaceKachok()
{
txRectangle(330,100,400,200);
}

