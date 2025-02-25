#include <iostream> // Biblioteca para entrada y salida estándar
int main(){
    int numero[5];
    int suma = 0;
    for(int i = 0; i < 5; i++){
        std::cout << "Introduce un número: ";
        std::cin >> numero[i];
    }
    for(int i = 0; i < 5; i++){
        suma += numero[i];
    }
    std::cout << "La suma de los números es: " << suma << std::endl;

    if(suma % 2 == 0){
        std::cout << "La suma de los números es par y " << std::endl;
    }else{
        std::cout << "La suma de los números es impar y" << std::endl;
    }
    if (suma > 0){
        std::cout << "La suma de los números es positiva" << std::endl;
    }else{
        std::cout << "La suma de los números es negativa" << std::endl;
    }
    return 0;
} 