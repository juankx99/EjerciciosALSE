/*
    Metodología y características de la solución:

    Este programa calcula el monto final de una inversión utilizando la fórmula del interés compuesto.
    Solicita al usuario que introduzca el capital inicial, la tasa de interés, el número de veces que se aplica
    el interés al año y el número de años. Luego, utiliza estos valores para calcular el monto final de la inversión.

    Características:
    - Utiliza la biblioteca estándar iostream para entrada y salida.
    - Utiliza la biblioteca cmath para funciones matemáticas.
    - Solicita al usuario que introduzca el capital inicial, la tasa de interés, el número de veces que se aplica
      el interés al año y el número de años.
    - Calcula el monto final utilizando la fórmula del interés compuesto.
    - Muestra el monto final al usuario.
*/
#include <iostream> // Biblioteca para entrada y salida estándar
#include <cmath> //Biblioteca para funciones matemáticas
int main(){
    int n,t; //Declarar variables para el número de veces que se aplica el interés al año y el número de años
    float r,A,P; //Declarar variables para la tasa de interés, el monto final y el capital inicial
    // Solicitar al usuario que ingrese todos los datos necesarios, para calcular el monto final
    std :: cout << "Introduce el capital inicial: ";
    std :: cin >> P;
    std :: cout << "Introduce la tasa de interés en decimal: ";
    std :: cin >> r;
    std :: cout << "Introduce el número de veces que se aplica interes al año: ";
    std :: cin >> n;
    std :: cout << "Introduce el número de años: ";
    std :: cin >> t;
    // Calcular el monto final utilizando la fórmula del interés compuesto
    A = P * pow(1 + r/n, n*t); // A = P(1 + r/n)^(nt)
    // Mostrar el monto final al usuario
    std :: cout << "El monto final es: " << A << std :: endl;
    return 0; // Fin del programa
}