/*
    Metodología y características de la solución:

    Este programa solicita al usuario que introduzca cinco números enteros, calcula la suma de estos números
    y determina si la suma es par o impar, y si es positiva o negativa. Para lograrlo, se utiliza un arreglo
    para almacenar los números ingresados por el usuario, un bucle para sumar los elementos del arreglo y 
    condicionales para evaluar las características de la suma.

    Características:
    - Utiliza la biblioteca estándar iostream para entrada y salida.
    - Solicita cinco números enteros al usuario.
    - Calcula la suma de los números ingresados.
    - Evalúa si la suma es par o impar utilizando la operación módulo.
    - Evalúa si la suma es positiva o negativa.
    - Muestra mensajes indicando las características de la suma.
*/
#include <iostream> // Biblioteca para entrada y salida estándar
int main(){
    int numero[5]; // Arreglo para almacenar los números ingresados por el usuario
    int suma = 0; // Variable para almacenar la suma de los números
    // Solicitar al usuario que introduzca cinco números
    for(int i = 0; i < 5; i++){
        std::cout << "Introduce un número: ";
        std::cin >> numero[i];
    }
    // Calcular la suma de los números ingresados
    for(int i = 0; i < 5; i++){
        suma += numero[i];
    }
    // Mostrar el resultado de la suma
    std::cout << "La suma de los números es: " << suma << std::endl;
    // Verificar si la suma es par o impar
    if(suma % 2 == 0){
        std::cout << "La suma de los números es par y " << std::endl;
    }else{
        std::cout << "La suma de los números es impar y" << std::endl;
    }
    // Verificar si la suma es positiva o negativa
    if (suma > 0){
        std::cout << "La suma de los números es positiva" << std::endl;
    }else{
        std::cout << "La suma de los números es negativa" << std::endl;
    }
    return 0; // Fin del programa
} 