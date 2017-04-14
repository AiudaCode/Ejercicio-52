#ifndef POLINDROMO_H
#define POLINDROMO_H
#include <iostream>

using namespace std;

class Polindromo
{
    public:
        Polindromo();
        virtual ~Polindromo();
        // se declaran los métodos publicos
        void setCadena(string val);
        string getCadena();
        bool validar();
    protected:

    private:
        // se declara un atributo privado
        string cadena;
};

#endif // POLINDROMO_H
