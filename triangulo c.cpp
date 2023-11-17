#include <stdio.h>

main(){
	// Se inicializa un arreglo o vector
	float arista[3];
	printf ("Digite el valor de la prime arista");
	scanf ("%f", arista[0]);
	printf ("Digite el valor de la segunda arista");
	scanf  ("%f", arista[1]);
	printf ("Digite el valor de la tercera arista");
	scanf ("%f", arista[2]);
	
	if (arista[0] == arista[1] && arista[0] == arista[2]){
		 printf ("El triangulo que digito es equilatero");
	}
	else if ((arista[0] != arista[1] && arista[0] != arista[2])){
		printf ("El triangulo es escaleno");
	}
	else {
		printf  ("El triangulo es isoceles");
	}

	return 0;
}

