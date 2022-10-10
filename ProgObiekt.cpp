// ProgObiekt.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

class pogoda {
public:
    int temperatura;
    std::string pogoda;
    std::string wilgotnosc;
    int wiatr;
};

class miejsce {
public:
    std::string kraj;
    std::string rejon;
    std::string miejscowosc;
};

int main()
{
    pogoda dzis_pogoda;
    pogoda jutro_pogoda;
    miejsce dzis_miejsce;

    dzis_pogoda.temperatura = 15;
    dzis_pogoda.pogoda = "przejrzyste niebo, slonecznie";
    dzis_pogoda.wilgotnosc = "65%";
    dzis_pogoda.wiatr = 15;

    jutro_pogoda.temperatura = 14;
    jutro_pogoda.pogoda = "przejrzyste niebo, slonecznie";
    jutro_pogoda.wilgotnosc = "60%";
    jutro_pogoda.wiatr = 11;


    dzis_miejsce.kraj = "Polska";
    dzis_miejsce.rejon = "Wielkopolska";
    dzis_miejsce.miejscowosc = "Poznan";

    if (dzis_pogoda.temperatura >= jutro_pogoda.temperatura)
    {
        std::cout << "Jutro nie bedzie cieplej";
    }
    else { std::cout << "Jutro bedzie cieplej"; }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
