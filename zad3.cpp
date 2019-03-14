#include "Aria.h"
int main(int argc, char **argv)
{
Aria::init();
ArArgumentParser argParser(&argc, argv);
argParser.loadDefaultArguments();
ArRobot robot;
ArRobotConnector robotConnector(&argParser, &robot);
ArLaserConnector laserConnector(&argParser, &robot, &robotConnector);
argParser.addDefaultArgument("-connectLaser");
if(!robotConnector.connectRobot())
{
ArLog::log(ArLog::Terse, "Could not connect to the robot.");
if(argParser.checkHelpAndWarnUnparsed())
{
Aria::logOptions();
Aria::exit(1);
}
}
if (!Aria::parseArgs() || !argParser.checkHelpAndWarnUnparsed())
{
Aria::logOptions();
Aria::exit(1);
}
ArKeyHandler keyHandler;
Aria::setKeyHandler(&keyHandler);
robot.attachKeyHandler(&keyHandler);
robot.runAsync(true);
laserConnector.connectLasers();
ArUtil::sleep(400);
//Poniżej deklarowane są podstawowe parametry pracy robota
robot.lock();
robot.stop(); //zatrzymanie robota
robot.moveTo(ArPose(0,0,0)); //wyzerowanie położenia
robot.setTransVelMax(200); //ustawienie maks. prędkości postępowej robota
robot.setRotVelMax(10); //ustawienie maks. prędkości obrotowej robota
robot.unlock();
double b, p[0][0], kat, a=1000; //deklaracja zmiennych pomocniczych
int zderzaki;
char odczyt[16];
while (1) //główna pętla programu
{
robot.lock();
// Przykładowy fragment kodu sterującego - zderzaki
zderzaki = robot.getStallValue();
odczyt = ArUtil::ConvertBool(zderzaki);
printf("Stan zderzakow: %s", odczyt);
robot.unlock();
while (1)
{
ArUtil::sleep(100);
printf("Poczatek petli wykrywania przeszkody, sprawdzam, czy zakonczylem ruch\n");
robot.lock();
if (robot.isMoveDone()) //komenda sprawdza, czy robot wykonał ruch
{
printf("Zakończyłem polecenie - Jazda w przód\n");
robot.unlock();
break;
}
robot.unlock();
printf("Wypatruję przeszkod\n");
p[0][0]=robot.checkRangeDevicesCumulativePolar(-45, +45, &kat);
printf("%lf\n", p[0][0]);
if (robot.checkRangeDevicesCumulativePolar(-45, +45, &kat)<500.0)
//komenda sprawdza, czy w zadanym obszarze nie ma przeszkody
{
printf("Wykrylem przeszkode");
robot.lock();
printf("Wykryto przeszkode, cofam\n");
robot.stop();
ArUtil::sleep(500);
robot.move(-250);
robot.unlock();
//jeśli wykryto przeszkodę, robot zawraca
printf("Rozpoczynam cofanie po wykryciu przeszkody");
while (1)
{
robot.lock();
if (robot.isMoveDone()) //sprawdzenie, czy robot wykonał obrót
{
printf("Zakonczylem polecenie - cofniecie po wykryciu przeszkody\n");
robot.setRotVel(0);
robot.unlock();
break;
}
robot.unlock();
ArUtil::sleep(100);
}
while (1)
{
robot.lock();
if (robot.isMoveDone(30))
{
printf("Zakonczone nast. polecenie - zwrot po wykr. przeszk.\n");
robot.unlock();
break;
}
robot.unlock();
ArUtil::sleep(100);
}
break;
}
}
printf("Zawracam do nastepnej proby pokonania dystansu\n");
robot.lock();
robot.setDeltaHeading(180);
robot.unlock();
while (1)
{
printf("Sprawdzam, czy zawrocilem\n");
robot.lock();
if (robot.isHeadingDone(0))
{
printf("Zakonczone polecenie - nast. proba pokonania dystansu\n");
robot.setRotVel(0);
robot.unlock();
break;
}
robot.unlock();
ArUtil::sleep(100);
}
robot.lock();
printf("Zeruje polozenie\n");
robot.moveTo(ArPose(0,0,0)); //Komenda zeruje położenie robota
robot.unlock();
} //koniec głównej pętli programu
robot.waitForRunExit();
Aria::exit(0);
}
