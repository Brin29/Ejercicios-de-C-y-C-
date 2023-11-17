//10. Convertir metros a cm, km, pies y pulgadas.(1 metro son 100 cm, 1000 metros son un kilómetro, 1 metro son 39.37 pulgadas y 1 pie son 12 pulgadas)
// %d = decimales
#include <stdio.h>

int main (){
	int metro, cem;
	float km, pies, pulgada;
	printf ("Digite los metros: ");
	scanf ("%d", &metro);
	
	cem = metro * 100;
	km = metro / 100;
	pies = metro * 3.281;
	pulgada = metro * 39.3701;
	
	if(metro == 0){
    	printf ("El numero 0 no es valido");
  	}
	
	else {
		printf ("%d m en centimetros es %d\n", metro, cem);
		printf ("%d m en kilometros es %f km\n", metro, km);
		printf ("%d m en pies es %f pies\n", metro, pies);
		printf ("%d m en pulgadas es %f pulgadas\n", metro, pulgada);
	}
}

