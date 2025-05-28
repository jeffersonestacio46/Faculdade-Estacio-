print("Numeros de 1 a 5 multiplos por 2 com o uso de for:")
for numero in range(1, 6):
    print(numero * 2)

print("\nNúmeros de 1 a 5 multiplos de 2 com o uso de While:")
contador = 1
while contador <= 5:
    print(contador *2 )
    contador += 1 #Isso informa ao While o numero inicial, e a soma de 1 em 1 até chegar em 5
                  #Assim limitamos o loop para que não seja inifinito e cause problemas ao sistema