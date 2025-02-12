def suc(numeroN):'''indica a Python que una nueva función está siendo definida'''
    return numeroN+1
def ant(numeroN):
    return numeroN-1 if numeroN>0 else 0 #lo uso para evitar los negativos en la resta y division
def suma(numero1,numero2):
    if numero2==0: 
     return numero1   #Si numero2 = 0, la suma de numero1 + 0 es simplemente numero1       
    return suc(suma(numero1,ant (numero2))) #Cuando b no es 0, la función se llama a sí misma con ant(numero2)), lo que significa que reducimos b en 1 en cada llamada recursiva. 
def multiplicacion(numero1, numero2):
    if numero2==0:
      return 0 
    return  suma(numero1,multiplicacion(numero1,ant(numero2))) 
def division(numero1, numero2):
    if numero2==0:
        return "Error: División por cero"
    if numero1<numero2: # si el numero1 es menor que el numero2 entonces la division es 0
     return 0
    return suc(division (numero1-numero2,numero2)) #si no se cumple la condicion numero1 < numero2 anterior entonces se llama a la funcion division con los valores numero1-numero2 y numero2
def resta(numero1, numero2):
    if numero2==0:
     return numero1#Si numero2 = 0, la suma de numero1 + 0 es simplemente numero1
    return resta(ant(numero1),ant(numero2)) #se llama a la funcion resta con los valores ant(numero1) y ant(numero2)


numero1=int(input("ingrese el primer valor:"))
numero2=int(input("ingrese el segundo valor:"))   

print("1. el restulado de la suma es:",suma(numero1, numero2))
print("2. el restulado de la multiplicacion es:",multiplicacion(numero1, numero2)) 
print("3. el restulado de la division es:",division(numero1, numero2))
print("4. el restulado de la resta es:",resta(numero1, numero2))







