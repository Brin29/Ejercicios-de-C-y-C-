# "Numero de 3 cifras"

print(" ********** SUMA DE PARES E IMPARES ************ ")

impar = []
par = []

numero1 = float(input("Digite el primer numero:"))
numero2 = float(input("Digite el segundo numero:"))
numero3 = float(input("Digite el tercer numero:"))

numerosCompletos = [numero1, numero2, numero3]

for i in range(len(numerosCompletos)):
  if (numerosCompletos[i] % 2 != 0):
    impar.append(numerosCompletos[i])
  else:
    par.append(numerosCompletos[i])

resultImpar = sum(impar)
resultPar = sum(par)

print(" ******** RESULTADO IMPAR *********")
print(round(resultImpar))

print(" ******** RESULTADO PAR *********")
print(round(resultPar))

