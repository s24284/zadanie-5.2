// zadanie 5.2.cpp :

// 5.2.cpp :
//

#include <iostream>
#include <vector>

void display(std::vector<int> tabliczka)
{


    for (int j = 0; j < tabliczka.size(); j++)
    {
        std::cout << tabliczka[j] << (((j % 2) == 0) ? "\t" : "\n");
    }
    std::cout << "\n";


}

int main()
{
    int rozmiartablicy;

    std::cout << "Stworze dla ciebie tablice liczb calkowitych. Podaj liczbe elementow, z ktorych ma sie skladac:\n";
    std::cin >> rozmiartablicy;


    std::vector<int> tabliczka(rozmiartablicy + rozmiartablicy % 2, 0); //jeżeli poda się nieparzysta liczbe, powiekszy się do parzystej z domyslna liczba 0

    for (int i = 0; i < rozmiartablicy; i++)
    {

        std::cout << "Podaj mi " << i + 1 << " liczbe, ktora trafi do tablicy:\n";
        std::cin >> tabliczka[i];

    }

    std::cout << "Twoja tablica wyglada tak:\n";
    display(tabliczka);

    for (int i = 0; i < rozmiartablicy; i = i + 2)
    {

        auto j = tabliczka[i]; //zapamietuje pierwszy indeks
        tabliczka[i] = tabliczka[i + 1]; //podmienia indeks nastepny z poprzednim
        tabliczka[i + 1] = j; //wpisuje wartosc pierwszego w nastepny

    }

    std::cout << "A zmieniona tablica wyglada tak:\n";
    display(tabliczka);


}

