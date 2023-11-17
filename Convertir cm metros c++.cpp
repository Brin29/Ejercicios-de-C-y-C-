#include "iostream"

using namespace std;
main (){
	int metro, cem;
	float km, pies, pulgada;
	cout << "Digite los metros: ";
	cin >> metro;
	
	cem = metro * 100;
	km = metro / 100;
	pies = metro * 3.281;
	pulgada = metro * 39.3701;
	
	if(metro == 0){
    	printf ("El numero 0 no es valido");
  	}
	
	else {
		cout <<  metro <<  " m en centimetros es: " << cem << endl;
		cout <<  metro <<  " m en kilometros es: " << km << endl;
		cout <<  metro <<  " m en pies es: " << pies << endl;
		cout <<  metro <<  " m en pulgadas es: " << pulgada << endl;
	}
}

