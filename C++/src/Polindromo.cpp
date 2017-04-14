#include "Polindromo.h"

Polindromo::Polindromo()
{
    // se le asigna un valor por defecto al atributo de la clase en el constructor
    cadena = "";
}

Polindromo::~Polindromo()
{
    //dtor
}

// método Set y Get del atributo de la clase
void Polindromo::setCadena(string val)
{
    cadena = val;
}

string Polindromo::getCadena()
{
    return cadena;
}

// método para validar si la cadena es un palíndromo
bool Polindromo::validar()
{
    // inicializo una variable de tipo entero llamada tam, en la longitud de la cadena
    int tam = getCadena().length();
    // inicializo un vector de tipo char con el tamaño del valor de la variable tam
    char caracter[tam];
    // inicializo una variable booleana llamada existe, en false
    bool existe = false;
    // recorro con el ciclo for para asignarle en cada posicion del vector una letra de la cadena
    for (int i = 0; i < tam; i++)
    {
        // en la posicion i del vector caracter se le asignara el caracter de la posicion i de la cadena
        caracter[i] = cadena[i];
    }
    // recorremos otra ves el vector para validar
    for (int j = 0; j < tam; j++)
    {
        // si el caracter de la posicion i es igual al caracter de la posicion (tam-i-j)
        if (caracter[j] == caracter[(tam-1)-j])
        {
            // entonces le asignamos a la variable existe el valor de true
            existe = true;
        }
        else
        {
            // sino retornamos false
            return false;
        }
    }
    // retornamos el valor de la variable existe
    return existe;
}
