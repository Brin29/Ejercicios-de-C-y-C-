def prom50Estudiantes():
  totalNotas = []
  promTotal = 0
  cantidadEstudiantes = int (input("Digite la cantidad de estudiantes a calificar"))
  cantiadNotas = int(input("Digite la cantidad de notas a calificar"))
  
  for i in range(cantidadEstudiantes):
    valorNotas = []
    notas = 0
    print("********** ESTUDIANTE NUMERO ", i + 1, "****************")
    for e in range(cantiadNotas):
      # Para que en la proxima iteracion los reinicie
      
      print("Digite el valor de la nota", e + 1, ":" )
      notas = float(input())
      valorNotas.append(notas)
      totalNotas.append(notas)
      
      prom = sum(valorNotas) / cantiadNotas
    print("El promedio del estudiante es: ", prom)
    promTotal += prom / cantidadEstudiantes

  print("El promedio de la nota de todos los estudiante es:", promTotal)

# def indicandoNumeroAlumnos():
  
  
# def completo():
  
prom50Estudiantes()
