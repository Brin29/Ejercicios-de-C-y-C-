  # metro = int(input("Digite el valor de los metros"))
metro = float(input("Digite el valor de los metros: "))
 
cem = round(metro * 100, 2)
km = round(metro / 100, 2)
pies = round(metro * 3.281, 2)
pulgada = round(metro * 39.3701, 2)
	
 
if(metro == 0):
  print ("El numero 0 no es valido");

	
else:
	print (metro,"m en centimetros es:", cem ,"cm\n");
	print (metro,"m en kilometros es:", km, "km\n");
	print (metro,"m en pies es pies es:", pies, "pies\n");
	print (metro,"m en pulgadas es:", pulgada, "pulgadas\n");

