
def triangulo(primeraMedida, segundaMedida, tercerMedida):
  if (primeraMedida == segundaMedida and primeraMedida == tercerMedida):
    print("El triangulo que digito es equilatero 'todos sus lados son iguales' \n")
    
  if ((primeraMedida != segundaMedida and segundaMedida != tercerMedida)):
    print("El triangulo es escaleno 'todos sus lados son diferentes' \n")

  else :
    print("El triangulo es isoceles 'dos de sus lados son diferentes'")


arista1 = float(input("Digite el valor de la prime arista:"))
arista2 = float(input("Digite el valor de la segunda arista:"))
arista3 = float(input("Digite el valor de la tercera arista:"))

medida = [arista1, arista2, arista3]

triangulo(medida[0], medida[1], medida[2])