#include <iostream>
#include <iomanip>
#include "fabryka.h"
#include <fstream>
#include <iostream>
#include <cstdio>
using namespace std;

int TireProduction1::TiresCounter=0;
int TireProduction2::TiresCounter=0;
int TireProduction3::TiresCounter=0;
int TireProduction4::TiresCounter=0;

int BodyKitProduction1::BodyKitsCounter=0;
int BodyKitProduction2::BodyKitsCounter=0;

int EngineProduction1::EnginesCounter=0;
int EngineProduction2::EnginesCounter=0;

int BodyKitwithTiresProduction1::Tiresline=0;
int BodyKitwithTiresProduction2::Tiresline=0;
int BodyKitwithTiresProduction1::BodyKitsline=0;
int BodyKitwithTiresProduction2::BodyKitsline=0;
int BodyKitwithTiresProduction1::PaintedBodyKitsline=0;
int BodyKitwithTiresProduction2::PaintedBodyKitsline=0;
int BodyKitwithTiresProduction1::BodyKitswithEngineline=0;
int BodyKitwithTiresProduction2::BodyKitswithEngineline=0;
int BodyKitwithTiresProduction1::PaintedBodyKitswithEngineline=0;
int BodyKitwithTiresProduction2::PaintedBodyKitswithEngineline=0;
int BodyKitwithTiresProduction1::BodyKitswithTires=0;
int BodyKitwithTiresProduction2::BodyKitswithTires=0;
int BodyKitwithTiresProduction1::PaintedBodyKitswithTires=0;
int BodyKitwithTiresProduction2::PaintedBodyKitswithTires=0;
int BodyKitwithTiresProduction1::BodyKitswithTiresandEngine=0;
int BodyKitwithTiresProduction2::BodyKitswithTiresandEngine=0;
int BodyKitwithTiresProduction1::PaintedbodyKitswithTiresandEngine=0;
int BodyKitwithTiresProduction2::PaintedbodyKitswithTiresandEngine=0;

int BodyKitPaint1::BodyKitsline=0;
int BodyKitPaint2::BodyKitsline=0;
int BodyKitPaint1::BodyKitswithTiresline=0;
int BodyKitPaint2::BodyKitswithTiresline=0;
int BodyKitPaint1::BodyKitswithTiresandEngineline=0;
int BodyKitPaint2::BodyKitswithTiresandEngineline=0;
int BodyKitPaint1::BodyKitswithEngineline=0;
int BodyKitPaint2::BodyKitswithEngineline=0;
int BodyKitPaint1::PaintedBodyKits=0;
int BodyKitPaint2::PaintedBodyKits=0;
int BodyKitPaint1::PaintedBodyKitswithTires=0;
int BodyKitPaint2::PaintedBodyKitswithTires=0;
int BodyKitPaint1::PaintedBodyKitswithEngine=0;
int BodyKitPaint2::PaintedBodyKitswithEngine=0;
int BodyKitPaint1::PaintedBodyKitswithTiresandEngine=0;
int BodyKitPaint2::PaintedBodyKitswithTiresandEngine=0;

int BodyKitswithEnginesProduction1::Enginesline=0;
int BodyKitswithEnginesProduction2::Enginesline=0;
int BodyKitswithEnginesProduction1::BodyKitsline=0;
int BodyKitswithEnginesProduction2::BodyKitsline=0;
int BodyKitswithEnginesProduction1::PaintedBodyKitsline=0;
int BodyKitswithEnginesProduction2::PaintedBodyKitsline=0;
int BodyKitswithEnginesProduction1::BodyKitswithTiresline=0;
int BodyKitswithEnginesProduction2::BodyKitswithTiresline=0;
int BodyKitswithEnginesProduction1::PaintedBodyKitswithTiresline=0;
int BodyKitswithEnginesProduction2::PaintedBodyKitswithTiresline=0;
int BodyKitswithEnginesProduction1::BodyKitswithEngine=0;
int BodyKitswithEnginesProduction2::BodyKitswithEngine=0;
int BodyKitswithEnginesProduction1::PaintedBodyKitswithEngine=0;
int BodyKitswithEnginesProduction2::PaintedBodyKitswithEngine=0;
int BodyKitswithEnginesProduction1::BodyKitwithTiresandEngine=0;
int BodyKitswithEnginesProduction2::BodyKitwithTiresandEngine=0;
int BodyKitswithEnginesProduction1::PaintedBodyKitswithTiresandEngine=0;
int BodyKitswithEnginesProduction2::PaintedBodyKitswithTiresandEngine=0;

int ElectricityProduction1::line=0;
int ElectricityProduction2::line=0;
int ElectricityProduction1::ReadyCars=0;
int ElectricityProduction2::ReadyCars=0;

void CarPart::LoadfromFile()
{
    ifstream plik;
    int bufor1;
    plik.open("dane.txt");

        plik >> bufor1;
        TireProduction1::TiresCounter=bufor1;
        plik >> bufor1;
        TireProduction2::TiresCounter=bufor1;
        plik >> bufor1;
        TireProduction3::TiresCounter=bufor1;
        plik >> bufor1;
        TireProduction4::TiresCounter=bufor1;

        plik >> bufor1;
        BodyKitProduction1::BodyKitsCounter=bufor1;
        plik >> bufor1;
        BodyKitProduction2::BodyKitsCounter=bufor1;

        plik >> bufor1;
        EngineProduction1::EnginesCounter=bufor1;
        plik >> bufor1;
        EngineProduction2::EnginesCounter=bufor1;

        plik >> bufor1;
        BodyKitPaint1::PaintedBodyKits=bufor1;
        plik >> bufor1;
        BodyKitPaint1::PaintedBodyKitswithTires=bufor1;
        plik >> bufor1;
        BodyKitPaint1::PaintedBodyKitswithEngine=bufor1;
        plik >> bufor1;
        BodyKitPaint1::PaintedBodyKitswithTiresandEngine=bufor1;
        plik >> bufor1;
        BodyKitPaint1::BodyKitsline=bufor1;
        plik >> bufor1;
        BodyKitPaint1::BodyKitswithTiresline=bufor1;
        plik >> bufor1;
        BodyKitPaint1::BodyKitswithEngineline=bufor1;
        plik >> bufor1;
        BodyKitPaint1::BodyKitswithTiresandEngineline=bufor1;

        plik >> bufor1;
        BodyKitPaint2::PaintedBodyKits=bufor1;
        plik >> bufor1;
        BodyKitPaint2::PaintedBodyKitswithTires=bufor1;
        plik >> bufor1;
        BodyKitPaint2::PaintedBodyKitswithEngine=bufor1;
        plik >> bufor1;
        BodyKitPaint2::PaintedBodyKitswithTiresandEngine=bufor1;
        plik >> bufor1;
        BodyKitPaint2::BodyKitsline=bufor1;
        plik >> bufor1;
        BodyKitPaint2::BodyKitswithTiresline=bufor1;
        plik >> bufor1;
        BodyKitPaint2::BodyKitswithEngineline=bufor1;
        plik >> bufor1;
        BodyKitPaint2::BodyKitswithTiresandEngineline=bufor1;

        plik >> bufor1;
        BodyKitwithTiresProduction1::BodyKitswithTires=bufor1;
        plik >> bufor1;
        BodyKitwithTiresProduction1::PaintedBodyKitswithTires=bufor1;
        plik >> bufor1;
        BodyKitwithTiresProduction1::BodyKitswithTiresandEngine=bufor1;
        plik >> bufor1;
        BodyKitwithTiresProduction1::PaintedbodyKitswithTiresandEngine=bufor1;
        plik >> bufor1;
        BodyKitwithTiresProduction1::Tiresline=bufor1;
        plik >> bufor1;
        BodyKitwithTiresProduction1::BodyKitsline=bufor1;
        plik >> bufor1;
        BodyKitwithTiresProduction1::PaintedBodyKitsline=bufor1;
        plik >> bufor1;
        BodyKitwithTiresProduction1::BodyKitswithEngineline=bufor1;
        plik >> bufor1;
        BodyKitwithTiresProduction1::PaintedBodyKitswithEngineline=bufor1;

        plik >> bufor1;
        BodyKitwithTiresProduction2::BodyKitswithTires=bufor1;
        plik >> bufor1;
        BodyKitwithTiresProduction2::PaintedBodyKitswithTires=bufor1;
        plik >> bufor1;
        BodyKitwithTiresProduction2::BodyKitswithTiresandEngine=bufor1;
        plik >> bufor1;
        BodyKitwithTiresProduction2::PaintedbodyKitswithTiresandEngine=bufor1;
        plik >> bufor1;
        BodyKitwithTiresProduction2::Tiresline=bufor1;
        plik >> bufor1;
        BodyKitwithTiresProduction2::BodyKitsline=bufor1;
        plik >> bufor1;
        BodyKitwithTiresProduction2::PaintedBodyKitsline=bufor1;
        plik >> bufor1;
        BodyKitwithTiresProduction2::BodyKitswithEngineline=bufor1;
        plik >> bufor1;
        BodyKitwithTiresProduction2::PaintedBodyKitswithEngineline=bufor1;

        plik >> bufor1;
        BodyKitswithEnginesProduction1::BodyKitswithEngine=bufor1;
        plik >> bufor1;
        BodyKitswithEnginesProduction1::BodyKitwithTiresandEngine=bufor1;
        plik >> bufor1;
        BodyKitswithEnginesProduction1::PaintedBodyKitswithEngine=bufor1;
        plik >> bufor1;
        BodyKitswithEnginesProduction1::PaintedBodyKitswithTiresandEngine=bufor1;
        plik >> bufor1;
        BodyKitswithEnginesProduction1::BodyKitsline=bufor1;
        plik >> bufor1;
        BodyKitswithEnginesProduction1::Enginesline=bufor1;
        plik >> bufor1;
        BodyKitswithEnginesProduction1::PaintedBodyKitsline=bufor1;
        plik >> bufor1;
        BodyKitswithEnginesProduction1::PaintedBodyKitswithTiresline=bufor1;
        plik >> bufor1;
        BodyKitswithEnginesProduction1::BodyKitswithTiresline=bufor1;

        plik >> bufor1;
        BodyKitswithEnginesProduction2::BodyKitswithEngine=bufor1;
        plik >> bufor1;
        BodyKitswithEnginesProduction2::BodyKitwithTiresandEngine=bufor1;
        plik >> bufor1;
        BodyKitswithEnginesProduction2::PaintedBodyKitswithEngine=bufor1;
        plik >> bufor1;
        BodyKitswithEnginesProduction2::PaintedBodyKitswithTiresandEngine=bufor1;
        plik >> bufor1;
        BodyKitswithEnginesProduction2::BodyKitsline=bufor1;
        plik >> bufor1;
        BodyKitswithEnginesProduction2::Enginesline=bufor1;
        plik >> bufor1;
        BodyKitswithEnginesProduction2::PaintedBodyKitsline=bufor1;
        plik >> bufor1;
        BodyKitswithEnginesProduction2::PaintedBodyKitswithTiresline=bufor1;
        plik >> bufor1;
        BodyKitswithEnginesProduction2::BodyKitswithTiresline=bufor1;

        plik >> bufor1;
        ElectricityProduction1::ReadyCars=bufor1;
        plik >> bufor1;
        ElectricityProduction1::line=bufor1;

        plik >> bufor1;
        ElectricityProduction2::ReadyCars=bufor1;
        plik >> bufor1;
        ElectricityProduction2::line=bufor1;

        plik.close();
}

void CarPart::SavetoFile()
{
    fstream plik( "Stan.txt", ios::out );
    if( plik.good() )
    {
    plik << "Stanowiska produkcji opon" << endl;

    plik << "Liczba opon w pierwszym stanowisku: " << TireProduction1::TiresCounter << endl;
    plik << "Liczba opon w drugim stanowisku: " << TireProduction2::TiresCounter << endl;
    plik << "Liczba opon w trzecim stanowisku: " << TireProduction3::TiresCounter << endl;
    plik << "Liczba opon w czwartym stanowisku: " << TireProduction4::TiresCounter << endl;

    plik << "Stanowiska produkcji silnikow" <<endl;

    plik << "Liczba silnikow w pierwszym stanowisku: " << EngineProduction1::EnginesCounter << endl;
    plik << "Liczba silnikow w drugim stanowisku: " << EngineProduction2::EnginesCounter << endl;

    plik << "Stanowiska produkcji karoserii" << endl;

    plik << "Liczba karoserii w pierwszym stanowisku: " << BodyKitProduction1::BodyKitsCounter << endl;
    plik << "Liczba karoserii w drugim stanowisku: " << BodyKitProduction2::BodyKitsCounter << endl;

    plik << "Stanowiska malowania karoserii" <<endl;

    plik << "Liczba pomalowanych karoserii w pierwszym stanowisku: " << BodyKitPaint1::PaintedBodyKits << endl;
    plik << "Liczba pomalowanych karoserii z oponami w pierwszym stanowisku: " << BodyKitPaint1::PaintedBodyKitswithTires << endl;
    plik << "Liczba pomalowanych karoserii z silnikami w pierwszym stanowisku: " << BodyKitPaint1::PaintedBodyKitswithEngine << endl;
    plik << "Liczba pomalowanych karoserii z silnikami i oponami w pierwszym stanowisku:" << BodyKitPaint1::PaintedBodyKitswithTiresandEngine << endl;
    plik << "Kolejka karoserii w pierwszym stanowisku: " << BodyKitPaint1::BodyKitsline << endl;
    plik << "Kolejka karoserii z oponami w pierwszym stanowisku: " << BodyKitPaint1::BodyKitswithTiresline << endl;
    plik << "Kolejka karoserii z silnikami w pierwszym stanowisku: " << BodyKitPaint1::BodyKitswithEngineline << endl;
    plik << "Kolejka karoserii z oponami i silnikami w pierwszym stanowisku: " << BodyKitPaint1::BodyKitswithTiresandEngineline << endl;

    plik << "Liczba pomalowanych karoserii w drugim stanowisku: " << BodyKitPaint2::PaintedBodyKits << endl;
    plik << "Liczba pomalowanych karoserii z oponami w drugim stanowisku: " << BodyKitPaint2::PaintedBodyKitswithTires << endl;
    plik << "Liczba pomalowanych karoserii z silnikami w drugim stanowisku: " << BodyKitPaint2::PaintedBodyKitswithEngine << endl;
    plik << "Liczba pomalowanych karoserii z silnikami i oponami w drugim stanowisku:" << BodyKitPaint2::PaintedBodyKitswithTiresandEngine << endl;
    plik << "Kolejka karoserii w drugim stanowisku: " << BodyKitPaint2::BodyKitsline << endl;
    plik << "Kolejka karoserii z oponami w drugim stanowisku: " << BodyKitPaint2::BodyKitswithTiresline << endl;
    plik << "Kolejka karoserii z silnikami w drugim stanowisku: " << BodyKitPaint2::BodyKitswithEngineline << endl;
    plik << "Kolejka karoserii z oponami i silnikami w drugim stanowisku: " << BodyKitPaint2::BodyKitswithTiresandEngineline << endl;

    plik << "Stanowiska montazu opon" << endl;

    plik << "Liczba karoserii z oponami w pierwszym stanowisku: " << BodyKitwithTiresProduction1::BodyKitswithTires << endl;
    plik << "Liczba pomalowanych karoserii z oponami w pierwszym stanowisku:" << BodyKitwithTiresProduction1::PaintedBodyKitswithTires << endl;
    plik << "Liczba karoserii z oponami i silnikami w pierwszym stanowisku: " << BodyKitwithTiresProduction1::BodyKitswithTiresandEngine << endl;
    plik << "Liczba pomalowanych karoserii z oponami i silnikami w pierwszym stanowisku: " << BodyKitwithTiresProduction1::PaintedbodyKitswithTiresandEngine << endl;
    plik << "Kolejka karoserii w pierwszym stanowisku: " << BodyKitwithTiresProduction1::BodyKitsline << endl;
    plik << "Kolejka pomalowanych karoserii w pierwszym stanowisku: " << BodyKitwithTiresProduction1::PaintedBodyKitsline << endl;
    plik << "Kolejka opon w pierwszym stanowisku: " << BodyKitwithTiresProduction1::Tiresline << endl;
    plik << "Kolejka karoserii z silnikami w pierwszym stanowisku: " << BodyKitwithTiresProduction1::BodyKitswithEngineline << endl;
    plik << "Kolejka pomalowanych karoserii z silnikami w pierwszym stanowisku: " << BodyKitwithTiresProduction1::PaintedBodyKitswithEngineline << endl;

    plik << "Liczba karoserii z oponami w drugim stanowisku: " << BodyKitwithTiresProduction2::BodyKitswithTires << endl;
    plik << "Liczba pomalowanych karoserii z oponami w drugim stanowisku: " << BodyKitwithTiresProduction2::PaintedBodyKitswithTires << endl;
    plik << "Liczba karoserii z oponami i silnikami w drugim stanowisku: " << BodyKitwithTiresProduction2::BodyKitswithTiresandEngine << endl;
    plik << "Liczba pomalowanych karoserii z oponami i silnikami w drugim stanowisku: " << BodyKitwithTiresProduction2::PaintedbodyKitswithTiresandEngine << endl;
    plik << "Kolejka karoserii w drugim stanowisku: " << BodyKitwithTiresProduction2::BodyKitsline << endl;
    plik << "Kolejka pomalowanych karoserii w drugim stanowisku: " << BodyKitwithTiresProduction2::PaintedBodyKitsline << endl;
    plik << "Kolejka opon w drugim stanowisku: " << BodyKitwithTiresProduction2::Tiresline << endl;
    plik << "Kolejka karoserii z silnikami w drugim stanowisku: " << BodyKitwithTiresProduction2::BodyKitswithEngineline << endl;
    plik << "Kolejka pomalowanych karoserii z silnikami w drugim stanowisku: " << BodyKitwithTiresProduction2::PaintedBodyKitswithEngineline << endl;

    plik << "Stanowiska montazu silnikow" << endl;

    plik << "Liczba karoserii z silnikami w pierwszym stanowisku: " << BodyKitswithEnginesProduction1::BodyKitswithEngine << endl;
    plik << "Liczba pomalowanych karoserii z silnikami w pierwszym stanowisku: " << BodyKitswithEnginesProduction1::PaintedBodyKitswithEngine << endl;
    plik << "Liczba karoserii z silnikami i oponami w pierwszym stanowisku: " << BodyKitswithEnginesProduction1::BodyKitwithTiresandEngine << endl;
    plik << "Liczba pomalowanych karoserii z oponami i silnikami w pierwszym stanowisku: " << BodyKitswithEnginesProduction1::PaintedBodyKitswithTiresandEngine << endl;
    plik << "Kolejka silnikow w pierwszym stanowisku: " << BodyKitswithEnginesProduction1::Enginesline << endl;
    plik << "Kolejka karoserii w pierwszym stanowisku: " << BodyKitswithEnginesProduction1::BodyKitsline << endl;
    plik << "Kolejka pomalowanych karoserii w pierwszym stanowisku: " << BodyKitswithEnginesProduction1::PaintedBodyKitsline << endl;
    plik << "Kolejka karoserii z oponami w pierwszym stanowisku: " << BodyKitswithEnginesProduction1::BodyKitswithTiresline << endl;
    plik << "Kolejka pomalowanych karoserii z oponami w pierwszym stanowisku: " << BodyKitswithEnginesProduction1::PaintedBodyKitswithTiresline << endl;

    plik << "Liczba karoserii z silnikami w drugim stanowisku: " << BodyKitswithEnginesProduction2::BodyKitswithEngine << endl;
    plik << "Liczba pomalowanych karoserii z silnikami w drugim stanowisku: " << BodyKitswithEnginesProduction2::PaintedBodyKitswithEngine << endl;
    plik << "Liczba karoserii z silnikami i oponami w drugim stanowisku: " << BodyKitswithEnginesProduction2::BodyKitwithTiresandEngine << endl;
    plik << "Liczba pomalowanych karoserii z oponami i silnikami w drugim stanowisku: " << BodyKitswithEnginesProduction2::PaintedBodyKitswithTiresandEngine << endl;
    plik << "Kolejka silnikow w drugim stanowisku: " << BodyKitswithEnginesProduction2::Enginesline << endl;
    plik << "Kolejka karoserii w drugim stanowisku: " << BodyKitswithEnginesProduction2::BodyKitsline << endl;
    plik << "Kolejka pomalowanych karoserii w drugim stanowisku: " << BodyKitswithEnginesProduction2::PaintedBodyKitsline << endl;
    plik << "Kolejka karoserii z oponami w drugim stanowisku: " << BodyKitswithEnginesProduction2::BodyKitswithTiresline << endl;
    plik << "Kolejka pomalowanych karoserii z oponami w drugim stanowisku: " << BodyKitswithEnginesProduction2::PaintedBodyKitswithTiresline << endl;

    plik << "Stanowiska montazu elektroniki" << endl;

    plik << "Liczba gotowych samochodow w stanowisku pierwszym: " << ElectricityProduction1::ReadyCars << endl;
    plik << "Kolejka samochodow w stanowisku pierwszym: " << ElectricityProduction1::line << endl;

    plik << "Liczba gotowych samochodow w stanowisku drugim: " << ElectricityProduction2::ReadyCars << endl;
    plik << "Kolejka samochodow w stanowisku drugim: " << ElectricityProduction2::line << endl;

    }
}

void CarPart::CreateTire()
{
    if(BodyKitwithTiresProduction1::Tiresline < 10 || BodyKitwithTiresProduction2::Tiresline < 10) ///warunek produkcji opon!!!
    {
        TireProduction1::TiresCounter++;
        TireProduction2::TiresCounter++;
        TireProduction3::TiresCounter++;
        TireProduction4::TiresCounter++;
    }
}

void CarPart::CreateBodyKit()
{
    if(BodyKitPaint1::BodyKitsline < 10 || BodyKitPaint2::BodyKitsline < 10 || BodyKitswithEnginesProduction1::BodyKitsline < 10 || BodyKitswithEnginesProduction2::BodyKitsline < 10 || BodyKitwithTiresProduction1::BodyKitsline < 10 || BodyKitwithTiresProduction2::BodyKitsline < 10)
    {
        BodyKitProduction1::BodyKitsCounter++;
        BodyKitProduction2::BodyKitsCounter++;
    }
}

void CarPart::CreateEngine()
{
    if(BodyKitswithEnginesProduction1::Enginesline < 10 || BodyKitswithEnginesProduction2::Enginesline < 10) /// warunek produkcji silnika
    {
        EngineProduction1::EnginesCounter++;
        EngineProduction2::EnginesCounter++;
    }
}

void CarPart::BodyKitPainting()
{
    if(BodyKitswithEnginesProduction1::PaintedBodyKitsline < 10 || BodyKitswithEnginesProduction2::PaintedBodyKitsline < 10 || BodyKitwithTiresProduction1::PaintedBodyKitsline < 10 || BodyKitwithTiresProduction2::PaintedBodyKitsline < 10 || ElectricityProduction1::line < 10 || ElectricityProduction2::line < 10 || BodyKitwithTiresProduction1::PaintedBodyKitswithEngineline < 10 || BodyKitwithTiresProduction2::PaintedBodyKitswithEngineline < 10 || BodyKitswithEnginesProduction1::PaintedBodyKitswithTiresline < 10 || BodyKitswithEnginesProduction2::PaintedBodyKitswithTiresline < 10)
    {
        if(BodyKitPaint1::BodyKitsline >= BodyKitPaint1::BodyKitswithEngineline && BodyKitPaint1::BodyKitsline >= BodyKitPaint1::BodyKitswithTiresandEngineline && BodyKitPaint1::BodyKitsline >= BodyKitPaint1::BodyKitswithTiresline && BodyKitPaint1::BodyKitsline > 0)
        {
            BodyKitPaint1::PaintedBodyKits++;
            BodyKitPaint1::BodyKitsline--;
        }
        if(BodyKitPaint1::BodyKitswithEngineline >= BodyKitPaint1::BodyKitsline && BodyKitPaint1::BodyKitswithEngineline >= BodyKitPaint1::BodyKitswithTiresandEngineline && BodyKitPaint1::BodyKitswithEngineline >= BodyKitPaint1::BodyKitswithTiresline && BodyKitPaint1::BodyKitswithEngineline > 0)
        {
            BodyKitPaint1::PaintedBodyKitswithEngine++;
            BodyKitPaint1::BodyKitswithEngineline--;
        }
        if(BodyKitPaint1::BodyKitswithTiresline >= BodyKitPaint1::BodyKitsline && BodyKitPaint1::BodyKitswithTiresline >= BodyKitPaint1::BodyKitswithTiresandEngineline && BodyKitPaint1::BodyKitswithTiresline >= BodyKitPaint1::BodyKitswithEngineline && BodyKitPaint1::BodyKitswithTiresline > 0)
        {
            BodyKitPaint1::PaintedBodyKitswithTires++;
            BodyKitPaint1::BodyKitswithTiresline--;
        }
        if(BodyKitPaint1::BodyKitswithTiresandEngineline >= BodyKitPaint1::BodyKitsline && BodyKitPaint1::BodyKitswithTiresandEngineline >= BodyKitPaint1::BodyKitswithTiresline && BodyKitPaint1::BodyKitswithTiresandEngineline >= BodyKitPaint1::BodyKitswithEngineline && BodyKitPaint1::BodyKitswithTiresandEngineline > 0)
        {
            BodyKitPaint1::PaintedBodyKitswithTiresandEngine++;
            BodyKitPaint1::BodyKitswithTiresandEngineline--;
        }
    }
    if(BodyKitswithEnginesProduction1::PaintedBodyKitsline < 10 || BodyKitswithEnginesProduction2::PaintedBodyKitsline < 10 || BodyKitwithTiresProduction1::PaintedBodyKitsline < 10 || BodyKitwithTiresProduction2::PaintedBodyKitsline < 10 || ElectricityProduction1::line < 10 || ElectricityProduction2::line < 10 || BodyKitwithTiresProduction1::PaintedBodyKitswithEngineline < 10 || BodyKitwithTiresProduction2::PaintedBodyKitswithEngineline < 10 || BodyKitswithEnginesProduction1::PaintedBodyKitswithTiresline < 10 || BodyKitswithEnginesProduction2::PaintedBodyKitswithTiresline < 10)
    {
        if(BodyKitPaint2::BodyKitsline >= BodyKitPaint2::BodyKitswithEngineline && BodyKitPaint2::BodyKitsline >= BodyKitPaint2::BodyKitswithTiresandEngineline && BodyKitPaint2::BodyKitsline >= BodyKitPaint2::BodyKitswithTiresline && BodyKitPaint2::BodyKitsline > 0)
        {
            BodyKitPaint2::PaintedBodyKits++;
            BodyKitPaint2::BodyKitsline--;
        }
        if(BodyKitPaint2::BodyKitswithEngineline >= BodyKitPaint2::BodyKitsline && BodyKitPaint2::BodyKitswithEngineline >= BodyKitPaint2::BodyKitswithTiresandEngineline && BodyKitPaint2::BodyKitswithEngineline >= BodyKitPaint2::BodyKitswithTiresline && BodyKitPaint2::BodyKitswithEngineline > 0)
        {
            BodyKitPaint2::PaintedBodyKitswithEngine++;
            BodyKitPaint2::BodyKitswithEngineline--;
        }
        if(BodyKitPaint2::BodyKitswithTiresline >= BodyKitPaint2::BodyKitsline && BodyKitPaint2::BodyKitswithTiresline >= BodyKitPaint2::BodyKitswithTiresandEngineline && BodyKitPaint2::BodyKitswithTiresline >= BodyKitPaint2::BodyKitswithEngineline && BodyKitPaint2::BodyKitswithTiresline > 0)
        {
            BodyKitPaint2::PaintedBodyKitswithTires++;
            BodyKitPaint2::BodyKitswithTiresline--;
        }
        if(BodyKitPaint2::BodyKitswithTiresandEngineline >= BodyKitPaint2::BodyKitsline && BodyKitPaint2::BodyKitswithTiresandEngineline >= BodyKitPaint2::BodyKitswithTiresline && BodyKitPaint2::BodyKitswithTiresandEngineline >= BodyKitPaint2::BodyKitswithEngineline && BodyKitPaint2::BodyKitswithTiresandEngineline > 0)
        {
            BodyKitPaint2::PaintedBodyKitswithTiresandEngine++;
            BodyKitPaint2::BodyKitswithTiresandEngineline--;
        }
    }
}

void CarPart::BodyKitswithTireWork()
{
    if(BodyKitswithEnginesProduction1::BodyKitswithTiresline < 10 || BodyKitswithEnginesProduction2::BodyKitswithTiresline < 10 || BodyKitswithEnginesProduction1::PaintedBodyKitswithTiresline < 10 || BodyKitswithEnginesProduction2::PaintedBodyKitswithTiresline < 10 || ElectricityProduction1::line < 10 || ElectricityProduction2::line < 10 || BodyKitPaint1::BodyKitswithTiresandEngineline < 10 || BodyKitPaint1::BodyKitswithTiresline < 10 || BodyKitPaint2::BodyKitswithTiresandEngineline < 10 || BodyKitPaint2::BodyKitswithTiresline < 10)
    {
        if(BodyKitwithTiresProduction1::Tiresline > 3)
        {
            if(BodyKitwithTiresProduction1::PaintedBodyKitsline > 0 && BodyKitwithTiresProduction1::PaintedBodyKitsline >= BodyKitwithTiresProduction1::BodyKitsline && BodyKitwithTiresProduction1::PaintedBodyKitsline >= BodyKitwithTiresProduction1::BodyKitswithEngineline && BodyKitwithTiresProduction1::PaintedBodyKitsline >= BodyKitwithTiresProduction1::PaintedBodyKitswithEngineline)
            {
                BodyKitwithTiresProduction1::PaintedBodyKitswithTires++;
                BodyKitwithTiresProduction1::Tiresline=BodyKitwithTiresProduction1::Tiresline-4;
                BodyKitwithTiresProduction1::PaintedBodyKitsline--;
            }
            if(BodyKitwithTiresProduction1::BodyKitsline > 0 && BodyKitwithTiresProduction1::BodyKitsline >= BodyKitwithTiresProduction1::PaintedBodyKitsline && BodyKitwithTiresProduction1::BodyKitsline >= BodyKitwithTiresProduction1::BodyKitswithEngineline && BodyKitwithTiresProduction1::BodyKitsline >= BodyKitwithTiresProduction1::PaintedBodyKitswithEngineline)
            {
                BodyKitwithTiresProduction1::BodyKitswithTires++;
                BodyKitwithTiresProduction1::Tiresline=BodyKitwithTiresProduction1::Tiresline-4;
                BodyKitwithTiresProduction1::BodyKitsline--;
            }
            if(BodyKitwithTiresProduction1::BodyKitswithEngineline > 0 && BodyKitwithTiresProduction1::BodyKitswithEngineline >= BodyKitwithTiresProduction1::BodyKitsline && BodyKitwithTiresProduction1::BodyKitswithEngineline >= BodyKitwithTiresProduction1::PaintedBodyKitsline && BodyKitwithTiresProduction1::BodyKitswithEngineline >= BodyKitwithTiresProduction1::PaintedBodyKitswithEngineline)
            {
                BodyKitwithTiresProduction1::BodyKitswithTiresandEngine++;
                BodyKitwithTiresProduction1::Tiresline=BodyKitwithTiresProduction1::Tiresline-4;
                BodyKitwithTiresProduction1::BodyKitswithEngineline--;
            }
            if(BodyKitwithTiresProduction1::PaintedBodyKitswithEngineline > 0 && BodyKitwithTiresProduction1::PaintedBodyKitswithEngineline >= BodyKitwithTiresProduction1::BodyKitswithEngineline && BodyKitwithTiresProduction1::PaintedBodyKitswithEngineline >= BodyKitwithTiresProduction1::BodyKitsline && BodyKitwithTiresProduction1::PaintedBodyKitswithEngineline >= BodyKitwithTiresProduction1::PaintedBodyKitsline)
            {
                BodyKitwithTiresProduction1::PaintedbodyKitswithTiresandEngine++;
                BodyKitwithTiresProduction1::Tiresline=BodyKitwithTiresProduction1::Tiresline-4;
                BodyKitwithTiresProduction1::PaintedBodyKitswithEngineline--;
            }
        }
    }
    if(BodyKitswithEnginesProduction1::BodyKitswithTiresline < 10 || BodyKitswithEnginesProduction2::BodyKitswithTiresline < 10 || BodyKitswithEnginesProduction1::PaintedBodyKitswithTiresline < 10 || BodyKitswithEnginesProduction2::PaintedBodyKitswithTiresline < 10 || ElectricityProduction1::line < 10 || ElectricityProduction2::line < 10 || BodyKitPaint1::BodyKitswithTiresandEngineline < 10 || BodyKitPaint1::BodyKitswithTiresline < 10 || BodyKitPaint2::BodyKitswithTiresandEngineline < 10 || BodyKitPaint2::BodyKitswithTiresline < 10)
    {
        if(BodyKitwithTiresProduction2::Tiresline > 3)
        {
            if(BodyKitwithTiresProduction2::PaintedBodyKitsline > 0 && BodyKitwithTiresProduction1::PaintedBodyKitsline >= BodyKitwithTiresProduction2::BodyKitsline && BodyKitwithTiresProduction2::PaintedBodyKitsline >= BodyKitwithTiresProduction2::BodyKitswithEngineline && BodyKitwithTiresProduction2::PaintedBodyKitsline >= BodyKitwithTiresProduction2::PaintedBodyKitswithEngineline)
            {
                BodyKitwithTiresProduction2::PaintedBodyKitswithTires++;
                BodyKitwithTiresProduction2::Tiresline=BodyKitwithTiresProduction2::Tiresline-4;
                BodyKitwithTiresProduction2::PaintedBodyKitsline--;
            }
            if(BodyKitwithTiresProduction2::BodyKitsline > 0 && BodyKitwithTiresProduction2::BodyKitsline >= BodyKitwithTiresProduction2::PaintedBodyKitsline && BodyKitwithTiresProduction2::BodyKitsline >= BodyKitwithTiresProduction2::BodyKitswithEngineline && BodyKitwithTiresProduction2::BodyKitsline >= BodyKitwithTiresProduction2::PaintedBodyKitswithEngineline)
            {
                BodyKitwithTiresProduction2::BodyKitswithTires++;
                BodyKitwithTiresProduction2::Tiresline=BodyKitwithTiresProduction2::Tiresline-4;
                BodyKitwithTiresProduction2::BodyKitsline--;
            }
            if(BodyKitwithTiresProduction2::BodyKitswithEngineline > 0 && BodyKitwithTiresProduction2::BodyKitswithEngineline >= BodyKitwithTiresProduction2::BodyKitsline && BodyKitwithTiresProduction2::BodyKitswithEngineline >= BodyKitwithTiresProduction2::PaintedBodyKitsline && BodyKitwithTiresProduction2::BodyKitswithEngineline >= BodyKitwithTiresProduction2::PaintedBodyKitswithEngineline)
            {
                BodyKitwithTiresProduction2::BodyKitswithTiresandEngine++;
                BodyKitwithTiresProduction2::Tiresline=BodyKitwithTiresProduction2::Tiresline-4;
                BodyKitwithTiresProduction2::BodyKitswithEngineline--;
            }
            if(BodyKitwithTiresProduction2::PaintedBodyKitswithEngineline > 0 && BodyKitwithTiresProduction2::PaintedBodyKitswithEngineline >= BodyKitwithTiresProduction2::BodyKitswithEngineline && BodyKitwithTiresProduction2::PaintedBodyKitswithEngineline >= BodyKitwithTiresProduction2::BodyKitsline && BodyKitwithTiresProduction2::PaintedBodyKitswithEngineline >= BodyKitwithTiresProduction2::PaintedBodyKitsline)
            {
                BodyKitwithTiresProduction2::PaintedbodyKitswithTiresandEngine++;
                BodyKitwithTiresProduction2::Tiresline=BodyKitwithTiresProduction2::Tiresline-4;
                BodyKitwithTiresProduction2::PaintedBodyKitswithEngineline--;
            }
        }
    }
}

void CarPart::BodyKitswithEngineWork()
{
    if(BodyKitwithTiresProduction1::BodyKitswithEngineline < 10 || BodyKitwithTiresProduction2::BodyKitswithEngineline < 10 ||  BodyKitwithTiresProduction1::PaintedBodyKitswithEngineline < 10 || BodyKitwithTiresProduction2::PaintedBodyKitswithEngineline < 10 || BodyKitPaint1::BodyKitswithEngineline < 10 || BodyKitPaint2::BodyKitswithEngineline < 10 || BodyKitPaint1::BodyKitswithTiresandEngineline < 10 || BodyKitPaint2::BodyKitswithTiresandEngineline < 10 || ElectricityProduction1::line < 10 || ElectricityProduction2::line < 10)
    {
        if(BodyKitswithEnginesProduction1::Enginesline > 0)
        {
            if(BodyKitswithEnginesProduction1::BodyKitsline > 0 && BodyKitswithEnginesProduction1::BodyKitsline >= BodyKitswithEnginesProduction1::BodyKitswithTiresline && BodyKitswithEnginesProduction1::BodyKitsline >= BodyKitswithEnginesProduction1::PaintedBodyKitsline && BodyKitswithEnginesProduction1::BodyKitsline >= BodyKitswithEnginesProduction1::PaintedBodyKitswithTiresline)
            {
                BodyKitswithEnginesProduction1::BodyKitswithEngine++;
                BodyKitswithEnginesProduction1::BodyKitsline--;
                BodyKitswithEnginesProduction1::Enginesline--;
            }
            if(BodyKitswithEnginesProduction1::PaintedBodyKitsline > 0 && BodyKitswithEnginesProduction1::PaintedBodyKitsline >= BodyKitswithEnginesProduction1::BodyKitsline && BodyKitswithEnginesProduction1::PaintedBodyKitsline >= BodyKitswithEnginesProduction1::BodyKitswithTiresline && BodyKitswithEnginesProduction1::PaintedBodyKitsline >= BodyKitswithEnginesProduction1::PaintedBodyKitswithTiresline)
            {
                BodyKitswithEnginesProduction1::PaintedBodyKitswithEngine++;
                BodyKitswithEnginesProduction1::PaintedBodyKitsline--;
                BodyKitswithEnginesProduction1::Enginesline--;
            }
            if(BodyKitswithEnginesProduction1::BodyKitswithTiresline > 0 && BodyKitswithEnginesProduction1::BodyKitswithTiresline >= BodyKitswithEnginesProduction1::BodyKitsline && BodyKitswithEnginesProduction1::BodyKitswithTiresline >= BodyKitswithEnginesProduction1::PaintedBodyKitsline && BodyKitswithEnginesProduction1::BodyKitswithTiresline >= BodyKitswithEnginesProduction1::PaintedBodyKitswithTiresline)
            {
                BodyKitswithEnginesProduction1::BodyKitwithTiresandEngine++;
                BodyKitswithEnginesProduction1::BodyKitswithTiresline--;
                BodyKitswithEnginesProduction1::Enginesline--;
            }
            if(BodyKitswithEnginesProduction1::PaintedBodyKitswithTiresline > 0 && BodyKitswithEnginesProduction1::PaintedBodyKitswithTiresline >= BodyKitswithEnginesProduction1::BodyKitsline && BodyKitswithEnginesProduction1::PaintedBodyKitswithTiresline >= BodyKitswithEnginesProduction1::PaintedBodyKitsline && BodyKitswithEnginesProduction1::PaintedBodyKitswithTiresline >= BodyKitswithEnginesProduction1::BodyKitswithTiresline)
            {
                BodyKitswithEnginesProduction1::PaintedBodyKitswithTiresandEngine++;
                BodyKitswithEnginesProduction1::PaintedBodyKitswithTiresline--;
                BodyKitswithEnginesProduction1::Enginesline--;
            }
        }
    }
    if(BodyKitwithTiresProduction1::BodyKitswithEngineline < 10 || BodyKitwithTiresProduction2::BodyKitswithEngineline < 10 ||  BodyKitwithTiresProduction1::PaintedBodyKitswithEngineline < 10 || BodyKitwithTiresProduction2::PaintedBodyKitswithEngineline < 10 || BodyKitPaint1::BodyKitswithEngineline < 10 || BodyKitPaint2::BodyKitswithEngineline < 10 || BodyKitPaint1::BodyKitswithTiresandEngineline < 10 || BodyKitPaint2::BodyKitswithTiresandEngineline < 10 || ElectricityProduction1::line < 10 || ElectricityProduction2::line < 10)
    {
        if(BodyKitswithEnginesProduction2::Enginesline > 0)
        {
            if(BodyKitswithEnginesProduction2::BodyKitsline > 0 && BodyKitswithEnginesProduction2::BodyKitsline >= BodyKitswithEnginesProduction2::BodyKitswithTiresline && BodyKitswithEnginesProduction2::BodyKitsline >= BodyKitswithEnginesProduction2::PaintedBodyKitsline && BodyKitswithEnginesProduction2::BodyKitsline >= BodyKitswithEnginesProduction2::PaintedBodyKitswithTiresline)
            {
                BodyKitswithEnginesProduction2::BodyKitswithEngine++;
                BodyKitswithEnginesProduction2::BodyKitsline--;
                BodyKitswithEnginesProduction2::Enginesline--;
            }
            if(BodyKitswithEnginesProduction2::PaintedBodyKitsline > 0 && BodyKitswithEnginesProduction2::PaintedBodyKitsline >= BodyKitswithEnginesProduction2::BodyKitsline && BodyKitswithEnginesProduction2::PaintedBodyKitsline >= BodyKitswithEnginesProduction2::BodyKitswithTiresline && BodyKitswithEnginesProduction2::PaintedBodyKitsline >= BodyKitswithEnginesProduction2::PaintedBodyKitswithTiresline)
            {
                BodyKitswithEnginesProduction2::PaintedBodyKitswithEngine++;
                BodyKitswithEnginesProduction2::PaintedBodyKitsline--;
                BodyKitswithEnginesProduction2::Enginesline--;
            }
            if(BodyKitswithEnginesProduction2::BodyKitswithTiresline > 0 && BodyKitswithEnginesProduction2::BodyKitswithTiresline >= BodyKitswithEnginesProduction2::BodyKitsline && BodyKitswithEnginesProduction2::BodyKitswithTiresline >= BodyKitswithEnginesProduction2::PaintedBodyKitsline && BodyKitswithEnginesProduction2::BodyKitswithTiresline >= BodyKitswithEnginesProduction2::PaintedBodyKitswithTiresline)
            {
                BodyKitswithEnginesProduction2::BodyKitwithTiresandEngine++;
                BodyKitswithEnginesProduction2::BodyKitswithTiresline--;
                BodyKitswithEnginesProduction2::Enginesline--;
            }
            if(BodyKitswithEnginesProduction2::PaintedBodyKitswithTiresline > 0 && BodyKitswithEnginesProduction2::PaintedBodyKitswithTiresline >= BodyKitswithEnginesProduction2::BodyKitsline && BodyKitswithEnginesProduction2::PaintedBodyKitswithTiresline >= BodyKitswithEnginesProduction2::PaintedBodyKitsline && BodyKitswithEnginesProduction2::PaintedBodyKitswithTiresline >= BodyKitswithEnginesProduction2::BodyKitswithTiresline)
            {
                BodyKitswithEnginesProduction2::PaintedBodyKitswithTiresandEngine++;
                BodyKitswithEnginesProduction2::PaintedBodyKitswithTiresline--;
                BodyKitswithEnginesProduction2::Enginesline--;
            }
        }
    }
}

void CarPart::ElectricityWork()
{
    if(ElectricityProduction1::line > 0)
    {
        ElectricityProduction1::line--;
        ElectricityProduction1::ReadyCars++;
    }
    if(ElectricityProduction2::line > 0)
    {
        ElectricityProduction2::line--;
        ElectricityProduction2::ReadyCars++;
    }
}

void CarPart::ParseTires()
{
    int l = 0;
    while(TireProduction1::TiresCounter>0)
    {
        TireProduction1::TiresCounter--;
        l++;
    }
    while(TireProduction2::TiresCounter>0)
    {
        TireProduction2::TiresCounter--;
        l++;
    }
    while(TireProduction3::TiresCounter>0)
    {
        TireProduction3::TiresCounter--;
        l++;
    }
    while(TireProduction4::TiresCounter>0)
    {
        TireProduction4::TiresCounter--;
        l++;
    }

    for(int i = 0 ; i < l ; i++)
    {
        if(BodyKitwithTiresProduction1::Tiresline >= BodyKitwithTiresProduction2::Tiresline)
        {
            BodyKitwithTiresProduction2::Tiresline++;
        }
        else
        {
            BodyKitwithTiresProduction1::Tiresline++;
        }
    }
}

void CarPart::ParseEngines()
{
    int l = 0;
    while(EngineProduction1::EnginesCounter>0)
    {
        EngineProduction1::EnginesCounter--;
        l++;
    }
    while(EngineProduction2::EnginesCounter>0)
    {
        EngineProduction2::EnginesCounter--;
        l++;
    }
    for(int i = 0 ; i < l ; i++)
    {
        if(BodyKitswithEnginesProduction1::Enginesline >= BodyKitswithEnginesProduction2::Enginesline)
        {
            BodyKitswithEnginesProduction2::Enginesline++;
        }
        else
        {
            BodyKitswithEnginesProduction1::Enginesline++;
        }
    }
}

void CarPart::ParseBodyKits()
{
    int l = 0;
    while(BodyKitProduction1::BodyKitsCounter>0)
    {
        BodyKitProduction1::BodyKitsCounter--;
        l++;
    }
    while(BodyKitProduction2::BodyKitsCounter>0)
    {
        BodyKitProduction2::BodyKitsCounter--;
        l++;
    }
    for(int i = 0 ; i < l ; i++)
    {
        if(BodyKitPaint1::BodyKitsline <= BodyKitPaint2::BodyKitsline && BodyKitPaint1::BodyKitsline <= BodyKitswithEnginesProduction1::BodyKitsline && BodyKitPaint1::BodyKitsline <= BodyKitswithEnginesProduction2::BodyKitsline && BodyKitPaint1::BodyKitsline <= BodyKitwithTiresProduction1::BodyKitsline && BodyKitPaint1::BodyKitsline <= BodyKitwithTiresProduction2::BodyKitsline)
        {
            BodyKitPaint1::BodyKitsline++;
            continue;
        }
        if(BodyKitPaint2::BodyKitsline <= BodyKitPaint1::BodyKitsline && BodyKitPaint2::BodyKitsline <= BodyKitswithEnginesProduction1::BodyKitsline && BodyKitPaint2::BodyKitsline <= BodyKitswithEnginesProduction2::BodyKitsline && BodyKitPaint2::BodyKitsline <= BodyKitwithTiresProduction1::BodyKitsline && BodyKitPaint2::BodyKitsline <= BodyKitwithTiresProduction2::BodyKitsline)
        {
            BodyKitPaint2::BodyKitsline++;
            continue;
        }
        if(BodyKitswithEnginesProduction1::BodyKitsline <= BodyKitPaint2::BodyKitsline && BodyKitswithEnginesProduction1::BodyKitsline <= BodyKitPaint1::BodyKitsline && BodyKitswithEnginesProduction1::BodyKitsline <= BodyKitswithEnginesProduction2::BodyKitsline && BodyKitswithEnginesProduction1::BodyKitsline <= BodyKitwithTiresProduction1::BodyKitsline && BodyKitswithEnginesProduction1::BodyKitsline <= BodyKitwithTiresProduction2::BodyKitsline)
        {
            BodyKitswithEnginesProduction1::BodyKitsline++;
            continue;
        }
        if(BodyKitswithEnginesProduction2::BodyKitsline <= BodyKitPaint2::BodyKitsline && BodyKitswithEnginesProduction2::BodyKitsline <= BodyKitPaint1::BodyKitsline && BodyKitswithEnginesProduction2::BodyKitsline <= BodyKitswithEnginesProduction1::BodyKitsline && BodyKitswithEnginesProduction2::BodyKitsline <= BodyKitwithTiresProduction1::BodyKitsline && BodyKitswithEnginesProduction2::BodyKitsline <= BodyKitwithTiresProduction2::BodyKitsline)
        {
            BodyKitswithEnginesProduction2::BodyKitsline++;
            continue;
        }
        if(BodyKitwithTiresProduction1::BodyKitsline <= BodyKitPaint2::BodyKitsline && BodyKitwithTiresProduction1::BodyKitsline <= BodyKitPaint1::BodyKitsline && BodyKitwithTiresProduction1::BodyKitsline <= BodyKitswithEnginesProduction2::BodyKitsline && BodyKitwithTiresProduction1::BodyKitsline <= BodyKitwithTiresProduction2::BodyKitsline && BodyKitwithTiresProduction1::BodyKitsline <= BodyKitswithEnginesProduction1::BodyKitsline)
        {
            BodyKitwithTiresProduction1::BodyKitsline++;
            continue;
        }
        if(BodyKitwithTiresProduction2::BodyKitsline <= BodyKitPaint2::BodyKitsline && BodyKitwithTiresProduction2::BodyKitsline <= BodyKitPaint1::BodyKitsline && BodyKitwithTiresProduction2::BodyKitsline <= BodyKitswithEnginesProduction2::BodyKitsline && BodyKitwithTiresProduction2::BodyKitsline <= BodyKitwithTiresProduction1::BodyKitsline && BodyKitwithTiresProduction2::BodyKitsline <= BodyKitswithEnginesProduction1::BodyKitsline)
        {
            BodyKitwithTiresProduction2::BodyKitsline++;
            continue;
        }
    }
}

void CarPart::ParsePaintBodyKits()
{
    int l = 0;
    while(BodyKitPaint1::PaintedBodyKits>0)
    {
        BodyKitPaint1::PaintedBodyKits--;
        l++;
    }
    while(BodyKitPaint2::PaintedBodyKits>0)
    {
        BodyKitPaint2::PaintedBodyKits--;
        l++;
    }
    for(int i = 0 ; i < l ; i++)
    {
        if(BodyKitswithEnginesProduction1::PaintedBodyKitsline <= BodyKitswithEnginesProduction2::PaintedBodyKitsline && BodyKitswithEnginesProduction1::PaintedBodyKitsline <= BodyKitwithTiresProduction1::PaintedBodyKitsline && BodyKitswithEnginesProduction1::PaintedBodyKitsline <= BodyKitwithTiresProduction2::PaintedBodyKitsline)
        {
            BodyKitswithEnginesProduction1::PaintedBodyKitsline++;
            continue;
        }
        if(BodyKitswithEnginesProduction2::PaintedBodyKitsline <= BodyKitswithEnginesProduction1::PaintedBodyKitsline && BodyKitswithEnginesProduction2::PaintedBodyKitsline <= BodyKitwithTiresProduction1::PaintedBodyKitsline && BodyKitswithEnginesProduction2::PaintedBodyKitsline <= BodyKitwithTiresProduction2::PaintedBodyKitsline)
        {
            BodyKitswithEnginesProduction2::PaintedBodyKitsline++;
            continue;
        }
        if(BodyKitwithTiresProduction1::PaintedBodyKitsline <= BodyKitswithEnginesProduction1::PaintedBodyKitsline &&  BodyKitwithTiresProduction1::PaintedBodyKitsline <= BodyKitswithEnginesProduction2::PaintedBodyKitsline &&  BodyKitwithTiresProduction1::PaintedBodyKitsline <= BodyKitwithTiresProduction2::PaintedBodyKitsline)
        {
             BodyKitwithTiresProduction1::PaintedBodyKitsline++;
             continue;
        }
        if(BodyKitwithTiresProduction2::PaintedBodyKitsline <= BodyKitswithEnginesProduction1::PaintedBodyKitsline &&  BodyKitwithTiresProduction2::PaintedBodyKitsline <= BodyKitswithEnginesProduction2::PaintedBodyKitsline &&  BodyKitwithTiresProduction2::PaintedBodyKitsline <= BodyKitwithTiresProduction1::PaintedBodyKitsline)
        {
             BodyKitwithTiresProduction2::PaintedBodyKitsline++;
             continue;
        }
    }
    l=0;
    while(BodyKitPaint1::PaintedBodyKitswithTires>0)
    {
        BodyKitPaint1::PaintedBodyKitswithTires--;
        l++;
    }
    while(BodyKitPaint2::PaintedBodyKitswithTires>0)
    {
        BodyKitPaint2::PaintedBodyKitswithTires--;
        l++;
    }
    for(int i = 0  ; i < l ; i++)
    {
        if(BodyKitswithEnginesProduction1::PaintedBodyKitswithTiresline >= BodyKitswithEnginesProduction2::PaintedBodyKitswithTiresline)
        {
            BodyKitswithEnginesProduction2::PaintedBodyKitswithTiresline++;
        }
        else
        {
            BodyKitswithEnginesProduction1::PaintedBodyKitswithTiresline++;
        }
    }
    l=0;
    while(BodyKitPaint1::PaintedBodyKitswithEngine>0)
    {
        BodyKitPaint1::PaintedBodyKitswithEngine--;
        l++;
    }
    while(BodyKitPaint2::PaintedBodyKitswithEngine>0)
    {
        BodyKitPaint2::PaintedBodyKitswithEngine--;
        l++;
    }
    for(int i = 0  ; i < l ; i++)
    {
        if(BodyKitwithTiresProduction1::PaintedBodyKitswithEngineline >= BodyKitwithTiresProduction2::PaintedBodyKitswithEngineline)
        {
            BodyKitwithTiresProduction2::PaintedBodyKitswithEngineline++;
        }
        else
        {
            BodyKitwithTiresProduction1::PaintedBodyKitswithEngineline++;
        }
    }
    l = 0;
    while(BodyKitPaint1::PaintedBodyKitswithTiresandEngine>0)
    {
        BodyKitPaint1::PaintedBodyKitswithTiresandEngine--;
        l++;
    }
    while(BodyKitPaint2::PaintedBodyKitswithTiresandEngine>0)
    {
        BodyKitPaint2::PaintedBodyKitswithTiresandEngine--;
        l++;
    }
    for(int i = 0 ; i < l ; i++)
    {
        if(ElectricityProduction1::line >= ElectricityProduction2::line)
        {
            ElectricityProduction2::line++;
        }
        else
        {
            ElectricityProduction1::line++;
        }
    }
}

void CarPart::ParseBodyKitswithTires()
{
    int l = 0;
    while(BodyKitwithTiresProduction1::BodyKitswithTires>0)
    {
        BodyKitwithTiresProduction1::BodyKitswithTires--;
        l++;
    }
    while(BodyKitwithTiresProduction2::BodyKitswithTires>0)
    {
        BodyKitwithTiresProduction2::BodyKitswithTires--;
        l++;
    }
    for(int i = 0 ; i < l ; i++)
    {
        if(BodyKitPaint1::BodyKitswithTiresline <= BodyKitPaint2::BodyKitswithTiresline && BodyKitPaint1::BodyKitswithTiresline <= BodyKitswithEnginesProduction1::BodyKitswithTiresline && BodyKitPaint1::BodyKitswithTiresline <= BodyKitswithEnginesProduction2::BodyKitswithTiresline)
        {
            BodyKitPaint1::BodyKitswithTiresline++;
            continue;
        }
        if(BodyKitPaint2::BodyKitswithTiresline <= BodyKitPaint1::BodyKitswithTiresline && BodyKitPaint2::BodyKitswithTiresline <= BodyKitswithEnginesProduction1::BodyKitswithTiresline && BodyKitPaint2::BodyKitswithTiresline <= BodyKitswithEnginesProduction2::BodyKitswithTiresline)
        {
            BodyKitPaint2::BodyKitswithTiresline++;
            continue;
        }
        if(BodyKitswithEnginesProduction1::BodyKitswithTiresline <= BodyKitswithEnginesProduction2::BodyKitswithTiresline && BodyKitswithEnginesProduction1::BodyKitswithTiresline <= BodyKitPaint1::BodyKitswithTiresline && BodyKitswithEnginesProduction1::BodyKitswithTiresline <= BodyKitPaint2::BodyKitswithTiresline)
        {
            BodyKitswithEnginesProduction1::BodyKitswithTiresline++;
            continue;
        }
        if(BodyKitswithEnginesProduction2::BodyKitswithTiresline <= BodyKitswithEnginesProduction1::BodyKitswithTiresline && BodyKitswithEnginesProduction2::BodyKitswithTiresline <= BodyKitPaint1::BodyKitswithTiresline && BodyKitswithEnginesProduction2::BodyKitswithTiresline <= BodyKitPaint2::BodyKitswithTiresline)
        {
            BodyKitswithEnginesProduction2::BodyKitswithTiresline++;
            continue;
        }
    }
    l = 0;
    while(BodyKitwithTiresProduction1::PaintedBodyKitswithTires>0)
    {
        BodyKitwithTiresProduction1::PaintedBodyKitswithTires--;
        l++;
    }
    while(BodyKitwithTiresProduction2::PaintedBodyKitswithTires>0)
    {
        BodyKitwithTiresProduction2::PaintedBodyKitswithTires--;
        l++;
    }
    for(int i = 0 ; i < l ; i++)
    {
        if(BodyKitswithEnginesProduction1::PaintedBodyKitswithTiresline >= BodyKitswithEnginesProduction2::PaintedBodyKitswithTiresline)
        {
            BodyKitswithEnginesProduction2::PaintedBodyKitswithTiresline++;
        }
        else
        {
            BodyKitswithEnginesProduction1::PaintedBodyKitswithTiresline++;
        }
    }
    l = 0;
    while(BodyKitwithTiresProduction1::BodyKitswithTiresandEngine>0)
    {
        BodyKitwithTiresProduction1::BodyKitswithTiresandEngine--;
        l++;
    }
    while(BodyKitwithTiresProduction2::BodyKitswithTiresandEngine>0)
    {
        BodyKitwithTiresProduction2::BodyKitswithTiresandEngine--;
        l++;
    }

    for(int i = 0 ; i < l ; i++)
    {
        if(BodyKitPaint1::BodyKitswithTiresandEngineline >= BodyKitPaint2::BodyKitswithTiresandEngineline)
        {
            BodyKitPaint2::BodyKitswithTiresandEngineline++;
        }
        else
        {
            BodyKitPaint1::BodyKitswithTiresandEngineline++;
        }
    }
    l = 0;
    while(BodyKitwithTiresProduction1::PaintedbodyKitswithTiresandEngine>0)
    {
        BodyKitwithTiresProduction1::PaintedbodyKitswithTiresandEngine--;
        l++;
    }
    while(BodyKitwithTiresProduction2::PaintedbodyKitswithTiresandEngine>0)
    {
        BodyKitwithTiresProduction2::PaintedbodyKitswithTiresandEngine--;
        l++;
    }
    for(int i = 0 ; i < l ; i++)
    {
        if(ElectricityProduction1::line >= ElectricityProduction2::line)
        {
            ElectricityProduction2::line++;
        }
        else
        {
            ElectricityProduction1::line++;
        }
    }
}

void CarPart::ParseBodyKitswithEngines()
{
    int l = 0;
    while(BodyKitswithEnginesProduction1::BodyKitswithEngine>0)
    {
        BodyKitswithEnginesProduction1::BodyKitswithEngine--;
        l++;
    }
    while(BodyKitswithEnginesProduction2::BodyKitswithEngine>0)
    {
        BodyKitswithEnginesProduction2::BodyKitswithEngine--;
        l++;
    }

    for(int i = 0 ; i < l ; i++)
    {
        if(BodyKitPaint1::BodyKitswithEngineline <= BodyKitPaint2::BodyKitswithEngineline && BodyKitPaint1::BodyKitswithEngineline <= BodyKitwithTiresProduction1::BodyKitswithEngineline && BodyKitPaint1::BodyKitswithEngineline <= BodyKitwithTiresProduction2::BodyKitswithEngineline)
        {
            BodyKitPaint1::BodyKitswithEngineline++;
            continue;
        }
        if(BodyKitPaint2::BodyKitswithEngineline <= BodyKitPaint1::BodyKitswithEngineline && BodyKitPaint2::BodyKitswithEngineline <= BodyKitwithTiresProduction1::BodyKitswithEngineline && BodyKitPaint2::BodyKitswithEngineline <= BodyKitwithTiresProduction2::BodyKitswithEngineline)
        {
            BodyKitPaint2::BodyKitswithEngineline++;
            continue;
        }
        if(BodyKitwithTiresProduction1::BodyKitswithEngineline <= BodyKitwithTiresProduction2::BodyKitswithEngineline && BodyKitwithTiresProduction1::BodyKitswithEngineline <= BodyKitPaint1::BodyKitswithEngineline && BodyKitwithTiresProduction1::BodyKitswithEngineline <= BodyKitPaint2::BodyKitswithEngineline)
        {
            BodyKitwithTiresProduction1::BodyKitswithEngineline++;
            continue;
        }
        if(BodyKitwithTiresProduction2::BodyKitswithEngineline <= BodyKitwithTiresProduction1::BodyKitswithEngineline && BodyKitwithTiresProduction2::BodyKitswithEngineline <= BodyKitPaint1::BodyKitswithEngineline && BodyKitwithTiresProduction2::BodyKitswithEngineline <= BodyKitPaint2::BodyKitswithEngineline)
        {
            BodyKitwithTiresProduction2::BodyKitswithEngineline++;
            continue;
        }
    }
    l = 0;
    while(BodyKitswithEnginesProduction1::PaintedBodyKitswithEngine>0)
    {
        BodyKitswithEnginesProduction1::PaintedBodyKitswithEngine--;
        l++;
    }
    while(BodyKitswithEnginesProduction2::PaintedBodyKitswithEngine>0)
    {
        BodyKitswithEnginesProduction2::PaintedBodyKitswithEngine--;
        l++;
    }

    for(int i = 0 ; i < l ; i++)
    {
        if(BodyKitwithTiresProduction1::PaintedBodyKitswithEngineline >= BodyKitwithTiresProduction2::PaintedBodyKitswithEngineline)
        {
            BodyKitwithTiresProduction2::PaintedBodyKitswithEngineline++;
        }
        else
        {
            BodyKitwithTiresProduction1::PaintedBodyKitswithEngineline++;
        }
    }
    l = 0;
    while(BodyKitswithEnginesProduction1::BodyKitwithTiresandEngine>0)
    {
        BodyKitswithEnginesProduction1::BodyKitwithTiresandEngine--;
        l++;
    }
    while(BodyKitswithEnginesProduction2::BodyKitwithTiresandEngine>0)
    {
        BodyKitswithEnginesProduction2::BodyKitwithTiresandEngine--;
        l++;
    }
    for(int i = 0 ; i < l ; i++)
    {
        if(BodyKitPaint1::BodyKitswithTiresandEngineline >= BodyKitPaint2::BodyKitswithTiresandEngineline)
        {
            BodyKitPaint2::BodyKitswithTiresandEngineline++;
        }
        else
        {
            BodyKitPaint1::BodyKitswithTiresandEngineline++;
        }
    }
    l = 0;
    while(BodyKitswithEnginesProduction1::PaintedBodyKitswithTiresandEngine>0)
    {
        BodyKitswithEnginesProduction1::PaintedBodyKitswithTiresandEngine--;
        l++;
    }
    while(BodyKitswithEnginesProduction2::PaintedBodyKitswithTiresandEngine>0)
    {
        BodyKitswithEnginesProduction2::PaintedBodyKitswithTiresandEngine--;
        l++;
    }
    for(int i = 0 ; i < l ; i++)
    {
        if(ElectricityProduction1::line >= ElectricityProduction2::line)
        {
            ElectricityProduction2::line++;
        }
        else
        {
            ElectricityProduction1::line++;
        }
    }
}


void CarPart::ShowParts()
{
cout<<"===================================================="<<endl;
cout<<setw(25)<<"Produkcja opon (1)"<<"|"<<setw(25)<<"Gotowe opony: "<<TireProduction1::TiresCounter<<endl;
cout<<"----------------------------------------------------"<<endl;
cout<<setw(25)<<"Produkcja opon (2)"<<"|"<<setw(25)<<"Gotowe opony: "<<TireProduction2::TiresCounter<<endl;
cout<<"----------------------------------------------------"<<endl;
cout<<setw(25)<<"Produkcja opon (3)"<<"|"<<setw(25)<<"Gotowe opony: "<<TireProduction3::TiresCounter<<endl;
cout<<"----------------------------------------------------"<<endl;
cout<<setw(25)<<"Produkcja opon (4)"<<"|"<<setw(25)<<"Gotowe opony: "<<TireProduction4::TiresCounter<<endl;
cout<<"----------------------------------------------------"<<endl;
cout<<setw(25)<<"Produkcja karoserii (1)"<<"|"<<setw(25)<<"Gotowe karoserie: "<<BodyKitProduction1::BodyKitsCounter<<endl;
cout<<"----------------------------------------------------"<<endl;
cout<<setw(25)<<"Produkcja karoserii (2)"<<"|"<<setw(25)<<"Gotowe karoserie: "<<BodyKitProduction2::BodyKitsCounter<<endl;
cout<<"----------------------------------------------------"<<endl;
cout<<setw(25)<<"Produkcja silnikow (1)"<<"|"<<setw(25)<<"Gotowe silniki: "<<EngineProduction1::EnginesCounter<<endl;
cout<<"----------------------------------------------------"<<endl;
cout<<setw(25)<<"Produkcja silnikow (2)"<<"|"<<setw(25)<<"Gotowe silniki: "<<EngineProduction2::EnginesCounter<<endl;
cout<<"----------------------------------------------------"<<endl;
cout<<setw(25)<<"Malowanie karoserii (1)"<<"|"<<setw(25)<<"Pom. kar.: "<<BodyKitPaint1::PaintedBodyKits<<endl;
cout<<setw(25)<<" "<<"|"<<setw(25)<<"Pom. kar. z op.: "<<BodyKitPaint1::PaintedBodyKitswithTires<<endl;
cout<<setw(25)<<" "<<"|"<<setw(25)<<"Pom. kar. z sil.: "<<BodyKitPaint1::PaintedBodyKitswithEngine<<endl;
cout<<setw(25)<<" "<<"|"<<setw(25)<<"Pom. kar. z op. i sil.: "<<BodyKitPaint1::PaintedBodyKitswithTiresandEngine<<endl;
cout<<setw(25)<<"Kolejki: "<<"|"<<setw(25)<<"Kol. kar.: "<<BodyKitPaint1::BodyKitsline<<endl;
cout<<setw(25)<<" "<<"|"<<setw(25)<<"Kol. kar. z op.: "<<BodyKitPaint1::BodyKitswithTiresline<<endl;
cout<<setw(25)<<" "<<"|"<<setw(25)<<"Kol. kar. z sil.: "<<BodyKitPaint1::BodyKitswithEngineline<<endl;
cout<<setw(25)<<" "<<"|"<<setw(25)<<"Kol. kar. z op. i sil.: "<<BodyKitPaint1::BodyKitswithTiresandEngineline<<endl;
cout<<"----------------------------------------------------"<<endl;
cout<<setw(25)<<"Malowanie karoserii (2)"<<"|"<<setw(25)<<"Pom. kar.: "<<BodyKitPaint2::PaintedBodyKits<<endl;
cout<<setw(25)<<" "<<"|"<<setw(25)<<"Pom. kar. z op.: "<<BodyKitPaint2::PaintedBodyKitswithTires<<endl;
cout<<setw(25)<<" "<<"|"<<setw(25)<<"Pom. kar. z sil.: "<<BodyKitPaint2::PaintedBodyKitswithEngine<<endl;
cout<<setw(25)<<" "<<"|"<<setw(25)<<"Pom. kar. z op. i sil.: "<<BodyKitPaint2::PaintedBodyKitswithTiresandEngine<<endl;
cout<<setw(25)<<"Kolejki: "<<"|"<<setw(25)<<"Kol. kar.: "<<BodyKitPaint2::BodyKitsline<<endl;
cout<<setw(25)<<" "<<"|"<<setw(25)<<"Kol. kar. z op.: "<<BodyKitPaint2::BodyKitswithTiresline<<endl;
cout<<setw(25)<<" "<<"|"<<setw(25)<<"Kol. kar. z sil.: "<<BodyKitPaint2::BodyKitswithEngineline<<endl;
cout<<setw(25)<<" "<<"|"<<setw(25)<<"Kol. kar. z op. i sil.: "<<BodyKitPaint2::BodyKitswithTiresandEngineline<<endl;
cout<<"----------------------------------------------------"<<endl;
cout<<setw(25)<<"Montaz opon (1)"<<"|"<<setw(25)<<"Kar. z op.: "<<BodyKitwithTiresProduction1::BodyKitswithTires<<endl;
cout<<setw(25)<<" "<<"|"<<setw(25)<<"Pom. kar. z op.: "<<BodyKitwithTiresProduction1::PaintedBodyKitswithTires<<endl;
cout<<setw(25)<<" "<<"|"<<setw(25)<<"kar. z op. i sil.: "<<BodyKitwithTiresProduction1::BodyKitswithTiresandEngine<<endl;
cout<<setw(25)<<" "<<"|"<<setw(25)<<"Pom. kar. z op. i sil.: "<<BodyKitwithTiresProduction1::PaintedbodyKitswithTiresandEngine<<endl;
cout<<setw(25)<<"Kolejki: "<<"|"<<setw(25)<<"Kol. pom. kar.: "<<BodyKitwithTiresProduction1::PaintedBodyKitsline<<endl;
cout<<setw(25)<<" "<<"|"<<setw(25)<<"Kol. kar.: "<<BodyKitwithTiresProduction1::BodyKitsline<<endl;
cout<<setw(25)<<" "<<"|"<<setw(25)<<"Kol. op.: "<<BodyKitwithTiresProduction1::Tiresline<<endl;
cout<<setw(25)<<" "<<"|"<<setw(25)<<"Kol. kar. z sil.: "<<BodyKitwithTiresProduction1::BodyKitswithEngineline<<endl;
cout<<setw(25)<<" "<<"|"<<setw(25)<<"Kol. pom. kar. z sil.: "<<BodyKitwithTiresProduction1::PaintedBodyKitswithEngineline<<endl;
cout<<"----------------------------------------------------"<<endl;
cout<<setw(25)<<"Montaz opon (2)"<<"|"<<setw(25)<<"Kar. z op.: "<<BodyKitwithTiresProduction2::BodyKitswithTires<<endl;
cout<<setw(25)<<" "<<"|"<<setw(25)<<"Pom. kar. z op.: "<<BodyKitwithTiresProduction2::PaintedBodyKitswithTires<<endl;
cout<<setw(25)<<" "<<"|"<<setw(25)<<"kar. z op. i sil.: "<<BodyKitwithTiresProduction2::BodyKitswithTiresandEngine<<endl;
cout<<setw(25)<<" "<<"|"<<setw(25)<<"Pom. kar. z op. i sil.: "<<BodyKitwithTiresProduction2::PaintedbodyKitswithTiresandEngine<<endl;
cout<<setw(25)<<"Kolejki: "<<"|"<<setw(25)<<"Kol. pom. kar.: "<<BodyKitwithTiresProduction2::PaintedBodyKitsline<<endl;
cout<<setw(25)<<" "<<"|"<<setw(25)<<"Kol. kar.: "<<BodyKitwithTiresProduction2::BodyKitsline<<endl;
cout<<setw(25)<<" "<<"|"<<setw(25)<<"Kol. op.: "<<BodyKitwithTiresProduction2::Tiresline<<endl;
cout<<setw(25)<<" "<<"|"<<setw(25)<<"Kol. kar. z sil.: "<<BodyKitwithTiresProduction2::BodyKitswithEngineline<<endl;
cout<<setw(25)<<" "<<"|"<<setw(25)<<"Kol. pom. kar. z sil.: "<<BodyKitwithTiresProduction2::PaintedBodyKitswithEngineline<<endl;
cout<<"----------------------------------------------------"<<endl;
cout<<setw(25)<<"Montaz silnikow (1)"<<"|"<<setw(25)<<"Kar. z sil.: "<<BodyKitswithEnginesProduction1::BodyKitswithEngine<<endl;
cout<<setw(25)<<" "<<"|"<<setw(25)<<"Pom. kar. z sil.: "<<BodyKitswithEnginesProduction1::PaintedBodyKitswithEngine<<endl;
cout<<setw(25)<<" "<<"|"<<setw(25)<<"Kar. z op. i sil.: "<<BodyKitswithEnginesProduction1::BodyKitwithTiresandEngine<<endl;
cout<<setw(25)<<" "<<"|"<<setw(25)<<"Pom. kar. z op. i sil.: "<<BodyKitswithEnginesProduction1::PaintedBodyKitswithTiresandEngine<<endl;
cout<<setw(25)<<"Kolejki: "<<"|"<<setw(25)<<"Kol. sil.: "<<BodyKitswithEnginesProduction1::Enginesline<<endl;
cout<<setw(25)<<" "<<"|"<<setw(25)<<"Kol. kar.: "<<BodyKitswithEnginesProduction1::BodyKitsline<<endl;
cout<<setw(25)<<" "<<"|"<<setw(25)<<"Kol. pom. kar.: "<<BodyKitswithEnginesProduction1::PaintedBodyKitsline<<endl;
cout<<setw(25)<<" "<<"|"<<setw(25)<<"Kol. kar z op.: "<<BodyKitswithEnginesProduction1::BodyKitswithTiresline<<endl;
cout<<setw(25)<<" "<<"|"<<setw(25)<<"Kol. pom. kar. z op.: "<<BodyKitswithEnginesProduction1::PaintedBodyKitswithTiresline<<endl;
cout<<"----------------------------------------------------"<<endl;
cout<<setw(25)<<"Montaz silnikow (2)"<<"|"<<setw(25)<<"Kar. z sil.: "<<BodyKitswithEnginesProduction2::BodyKitswithEngine<<endl;
cout<<setw(25)<<" "<<"|"<<setw(25)<<"Pom. kar. z sil.: "<<BodyKitswithEnginesProduction2::PaintedBodyKitswithEngine<<endl;
cout<<setw(25)<<" "<<"|"<<setw(25)<<"Kar. z op. i sil.: "<<BodyKitswithEnginesProduction2::BodyKitwithTiresandEngine<<endl;
cout<<setw(25)<<" "<<"|"<<setw(25)<<"Pom. kar. z op. i sil.: "<<BodyKitswithEnginesProduction2::PaintedBodyKitswithTiresandEngine<<endl;
cout<<setw(25)<<"Kolejki: "<<"|"<<setw(25)<<"Kol. sil.: "<<BodyKitswithEnginesProduction2::Enginesline<<endl;
cout<<setw(25)<<" "<<"|"<<setw(25)<<"Kol. kar.: "<<BodyKitswithEnginesProduction2::BodyKitsline<<endl;
cout<<setw(25)<<" "<<"|"<<setw(25)<<"Kol. pom. kar.: "<<BodyKitswithEnginesProduction2::PaintedBodyKitsline<<endl;
cout<<setw(25)<<" "<<"|"<<setw(25)<<"Kol. kar z op.: "<<BodyKitswithEnginesProduction2::BodyKitswithTiresline<<endl;
cout<<setw(25)<<" "<<"|"<<setw(25)<<"Kol. pom. kar. z op.: "<<BodyKitswithEnginesProduction2::PaintedBodyKitswithTiresline<<endl;
cout<<"----------------------------------------------------"<<endl;
cout<<setw(25)<<"Montaz elektroniki (1)"<<"|"<<setw(25)<<"Gotowe samochody: "<<ElectricityProduction1::ReadyCars<<endl;
cout<<setw(25)<<"Kolejka: "<<"|"<<setw(25)<<"Pom. kar. z op. i sil.: "<<ElectricityProduction1::line<<endl;
cout<<"----------------------------------------------------"<<endl;

cout<<setw(25)<<"Montaz elektroniki (2)"<<"|"<<setw(25)<<"Gotowe samochody: "<<ElectricityProduction2::ReadyCars<<endl;
cout<<setw(25)<<"Kolejka: "<<"|"<<setw(25)<<"Pom. kar. z op. i sil.: "<<ElectricityProduction2::line<<endl;
cout<<"===================================================="<<endl;
    return;
}

void CarPart::ProductionCycle()
{
    CreateTire();
    CreateBodyKit();
    CreateEngine();
    BodyKitPainting();
    BodyKitswithTireWork();
    BodyKitswithEngineWork();
    ElectricityWork();
    return;
}

void CarPart::ParseCycle()
{
    ParseTires();
    ParseEngines();
    ParseBodyKits();
    ParsePaintBodyKits();
    ParseBodyKitswithTires();
    ParseBodyKitswithEngines();
    return;
}

