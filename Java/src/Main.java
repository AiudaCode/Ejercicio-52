
import javax.swing.JOptionPane;

public class Main
{
    public static void main(String[] args)
    {
        // creamos un objeto de la clase Palindromo (Instanciación)
        Palindromo obj = new Palindromo();
        // pedimos la cadena
        String cadena = JOptionPane.showInputDialog("Digite la cadena:");
        // encapsulamos la cadena
        obj.setCadena(cadena);
        // si el método de validar retorna true
        if (obj.validar()) 
        {
            // entonces, se muestra en pantalla indicando que SI es un palíndromo la cadena
            JOptionPane.showMessageDialog(null, "La cadena '" + obj.getCadena() + "' es un palindromo.");
        }
        else
        {
            // sino, se muestra en pantalla indicando que NO es un palíndromo la cadena
            JOptionPane.showMessageDialog(null, "La cadena '" + obj.getCadena() + "' no es un palindromo.");
        }
    }
}
