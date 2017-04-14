public class Palindromo
{
    // se declara un atributo para la clase cadena
    private String cadena;
    
    public Palindromo()
    {
        // se le asigna un valor por defecto al atributo de la clase en el constructor
        cadena = "";
    }
    
    // método Set y Get del atributo de la clase
    public void setCadena(String val)
    {
        cadena = val;
    }
    
    public String getCadena()
    {
        return cadena;
    }
    
    // método para validar si la cadena es un palíndromo
    public boolean validar()
    {
        // inicializo una variable de tipo entero llamada tam, en la longitud de la cadena
        int tam = getCadena().length();
        // inicializo un vector de tipo char con el tamaño del valor de la variable tam
        char [] caracter = new char[tam];
        // inicializo una variable booleana llamada existe, en false
        boolean existe = false;
        // recorro con el ciclo for para asignarle en cada posicion del vector una letra de la cadena
        for (int i = 0; i < tam; i++)
        {
            // en la posicion i del vector caracter se le asignara el caracter de la posicion i de la cadena
            caracter[i] = getCadena().charAt(i);
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
}