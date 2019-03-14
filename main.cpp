#include <iostream>
#include <iomanip>
#include <vector>
#include <cstdio>
#include "fabryka.h"
#include <conio.h>
#include <windows.h>
#include <unistd.h> /// z malej sleep!!!
using namespace std;

int main()
{
CarPart fabryka;
fabryka.LoadfromFile();
cout << "Warunki poczatkowe dla fabryki samochodow" << endl;
fabryka.ShowParts();
    for(int i = 0 ; i < 100 ; i++)
    {
        fabryka.ProductionCycle();
        cout << "Po cyklu produkcyjnym" << endl;
        //fabryka.ShowParts();

      //  Sleep(700);
        fabryka.ParseCycle();
        cout << "Po przeniesieniu elementow" << endl;
        //fabryka.ShowParts();
       // Sleep(700);
    }
    fabryka.ShowParts();
fabryka.SavetoFile();
return 0;
}
