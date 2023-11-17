#include "iostream"

using namespace std;
int main (){
	// Se inicializa un arreglo o vector
	float medida[3];
	cout << "Digite el valor de la prime arista: \n";
	cin >> medida[0];
	cout << "Digite el valor de la segunda arista: \n";
	cin >> medida[1];
	cout << "Digite el valor de la tercera arista: \n";
	cin >> medida[2];
	
	if (medida[0] == medida[1] && medida[0] == medida[2]){
		cout << "El triangulo que digito es equilatero 'todos sus lados son iguales' \n";
	}
	else if ((medida[0] != medida[1] && medida[0] != medida[2])){
			cout << "El triangulo es escaleno 'todos sus lados son diferentes' \n";
	}
	else {
	
		cout << "El triangulo es isoceles 'dos de sus lados son diferentes'";
	}
	return 0;
}

