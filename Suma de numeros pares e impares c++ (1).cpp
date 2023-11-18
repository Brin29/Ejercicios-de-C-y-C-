//Dado un número X de 3 cifras determine la suma de las cifras pares y la suma de las cifras impares
//Ejemplo: Si el número de tres cifras es 364, de los tres dígitos, los pares son 6 y 4 .... y en este caso el único
//impar es 3 por lo tanto la Suma de pares es 10 y la Suma de Impares 3.
#include <iostream>
using namespace std;

int main() {
    int numero;
    cout << "Ingrese un numero de tres cifras: ";
    cin >> numero;

	//Condicion para validar el numero
    if(numero < 100 || numero > 999) {
        cout << "El numero ingresado no tiene tres cifras." << endl;
    } 
    
	else {
        int digito;
        int sumaPares = 0;
        int sumaImpares = 0;

        while(numero > 0) {
        	
            digito = numero % 10; // Obtener el último dígito

            if(digito % 2 == 0) {
                sumaPares += digito;
            } else {
                sumaImpares += digito;
            }

            numero /= 10; // Eliminar el último dígito
        }

        cout << "La suma de los digitos pares es: " << sumaPares << endl;
        cout << "La suma de los digitos impares es: " << sumaImpares << endl;
    }

    return 0;
}

