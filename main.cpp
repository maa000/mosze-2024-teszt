#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS]; //ez egy hiba
    std::cout << '1-100 ertekek duplazasa' //ez egy hiba
    for (int i = 0;)  // ez egy hiba
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++) // ez egy hiba
    {
        std::cout << "Ertek:" //ez egy hiba
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag; //ez egy hiba
    for (int i = 0; i < N_ELEMENTS, i++)  // ez egy hiba
    {
        atlag += b[i] //ez egy hiba
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
