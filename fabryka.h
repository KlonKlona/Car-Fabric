	#include <iostream>
#include <vector>

using namespace std;

class CarPart
{
public:
    CarPart() {};
    ~CarPart() {};
    void ShowParts();
    void ProductionCycle();
    void ParseCycle();
    void CreateTire();
    void CreateBodyKit();
    void CreateEngine();
    void BodyKitPainting();
    void BodyKitswithTireWork();
    void BodyKitswithEngineWork();
    void ElectricityWork();
    void ParseTires();
    void ParseEngines();
    void ParseBodyKits();
    void ParsePaintBodyKits();
    void ParseBodyKitswithTires();
    void ParseBodyKitswithEngines();
    void LoadfromFile();
    void SavetoFile();
};

class TireProduction1 : public CarPart
{
public:
    static int TiresCounter;
    TireProduction1() {};
    ~TireProduction1() {};
};

class TireProduction2 : public CarPart
{
public:
    static int TiresCounter;
    TireProduction2() {};
    ~TireProduction2() {};
};

class TireProduction3 : public CarPart
{
public:
    static int TiresCounter;
    TireProduction3() {};
    ~TireProduction3() {};
};

class TireProduction4 : public CarPart
{
public:
    static int TiresCounter;
    TireProduction4() {};
    ~TireProduction4() {};
};

class BodyKitProduction1 : public CarPart
{
public:
    static int BodyKitsCounter;
    BodyKitProduction1() {};
    ~BodyKitProduction1() {};
};

class BodyKitProduction2 : public CarPart
{
public:
    static int BodyKitsCounter;
    BodyKitProduction2() {};
    ~BodyKitProduction2() {};
};

class EngineProduction1 : public CarPart
{
public:
    static int EnginesCounter;
    EngineProduction1() {};
    ~EngineProduction1() {};
};

class EngineProduction2 : public CarPart
{
public:
    static int EnginesCounter;
    EngineProduction2() {};
    ~EngineProduction2() {};
};

class BodyKitwithTiresProduction1 : public CarPart
{
public:
    static int PaintedBodyKitsline;
    static int BodyKitsline;
    static int Tiresline;
    static int BodyKitswithEngineline;
    static int PaintedBodyKitswithEngineline;
    static int BodyKitswithTires;
    static int PaintedBodyKitswithTires;
    static int BodyKitswithTiresandEngine;
    static int PaintedbodyKitswithTiresandEngine;
    BodyKitwithTiresProduction1() {};
    ~BodyKitwithTiresProduction1() {};
};

class BodyKitwithTiresProduction2 : public CarPart
{
public:
    static int PaintedBodyKitsline;
    static int BodyKitsline;
    static int Tiresline;
    static int BodyKitswithEngineline;
    static int PaintedBodyKitswithEngineline;
    static int BodyKitswithTires;
    static int PaintedBodyKitswithTires;
    static int BodyKitswithTiresandEngine;
    static int PaintedbodyKitswithTiresandEngine;
    BodyKitwithTiresProduction2() {};
    ~BodyKitwithTiresProduction2() {};
};

class BodyKitPaint1 : public CarPart
{
public:
    static int BodyKitsline;
    static int BodyKitswithTiresline;
    static int BodyKitswithTiresandEngineline;
    static int BodyKitswithEngineline;
    static int PaintedBodyKits;
    static int PaintedBodyKitswithTires;
    static int PaintedBodyKitswithEngine;
    static int PaintedBodyKitswithTiresandEngine;
    BodyKitPaint1() {};
    ~BodyKitPaint1() {};
};

class BodyKitPaint2 : public CarPart
{
public:
    static int BodyKitsline;
    static int BodyKitswithTiresline;
    static int BodyKitswithTiresandEngineline;
    static int BodyKitswithEngineline;
    static int PaintedBodyKits;
    static int PaintedBodyKitswithTires;
    static int PaintedBodyKitswithEngine;
    static int PaintedBodyKitswithTiresandEngine;
    BodyKitPaint2() {};
    ~BodyKitPaint2() {};
};

class BodyKitswithEnginesProduction1 : public CarPart
{
public:
    static int Enginesline;
    static int BodyKitsline;
    static int PaintedBodyKitsline;
    static int BodyKitswithTiresline;
    static int PaintedBodyKitswithTiresline;
    static int BodyKitswithEngine;
    static int PaintedBodyKitswithEngine;
    static int BodyKitwithTiresandEngine;
    static int PaintedBodyKitswithTiresandEngine;
    BodyKitswithEnginesProduction1() {};
    ~BodyKitswithEnginesProduction1() {};
};

class BodyKitswithEnginesProduction2 : public CarPart
{
public:
    static int Enginesline;
    static int BodyKitsline;
    static int PaintedBodyKitsline;
    static int BodyKitswithTiresline;
    static int PaintedBodyKitswithTiresline;
    static int BodyKitswithEngine;
    static int PaintedBodyKitswithEngine;
    static int BodyKitwithTiresandEngine;
    static int PaintedBodyKitswithTiresandEngine;
    BodyKitswithEnginesProduction2() {};
    ~BodyKitswithEnginesProduction2() {};
};

class ElectricityProduction1: public CarPart
{
public:
    static int line;
    static int ReadyCars;
    ElectricityProduction1() {};
    ~ElectricityProduction1() {};
};

class ElectricityProduction2: public CarPart
{
public:
    static int line;
    static int ReadyCars;
    ElectricityProduction2() {};
    ~ElectricityProduction2() {};
};

