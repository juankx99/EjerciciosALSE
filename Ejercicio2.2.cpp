#include<iostream>
int main(){
    
    int numero;
    std::cout << "Introduce un número: ";
    std::cin >> numero;
    if((numero % 2 == 0) && (numero > 0)){
        std::cout << "El número es par" << std::endl;
    }else{
        std::cout << "El número es impar" << std::endl;
    }
    return 0;
}
