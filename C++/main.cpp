#include <iostream>
#include "Polindromo.h"

using namespace std;

int main(void)
{
    Polindromo *obj = new Polindromo();
    string cadena;
    cout << "Digite la cadena" << endl;
    cout << ">> ";
    cin >> cadena;
    obj->setCadena(cadena);
    // si el método de validar retorna true
    if (obj->validar())
    {
        // entonces, se muestra en pantalla indicando que SI es un palíndromo la cadena
        cout << "La cadena '" << obj->getCadena() << "' es un palindromo." << endl;
    }
    else
    {
        // sino, se muestra en pantalla indicando que NO es un palíndromo la cadena
        cout << "La cadena '" << obj->getCadena() << "' no es un palindromo." << endl;
    }
}
