/*
    Metodología y características de la solución:

    Este programa solicita al usuario que introduzca un número entero y determina si es par o impar.
    Para lograrlo, se utiliza la operación módulo (%) para verificar si el número es divisible por 2.
    Además, se verifica que el número sea positivo utilizando el operador logico AND pra ver si es postivo.
    
    Características:
    - Utiliza la biblioteca estándar iostream para entrada y salida.
    - Solicita un número entero al usuario.
    - Evalúa si el número es par utilizando la operación módulo.
    - Usa el operador lógico AND (&&) para verificar dos condiciones simultáneamente.
    - Muestra un mensaje indicando si el número es par o impar.
*/
#include<iostream> // Biblioteca para entrada y salida estándar

int main(){
    
    int numero; // Variable para almacenar el número ingresado por el usuario

     // Solicitar al usuario que introduzca un número
    std::cout << "Introduce un número: ";
    std::cin >> numero;
     // Verificar si el número es par y positivo usando el operador lógico AND (&&) y mcodulo.
    if((numero % 2 == 0) && (numero > 0)){
        std::cout << "El número es par" << std::endl;
    }else{
        std::cout << "El número es impar" << std::endl;
    }
    return 0; // Fin del programa
}
