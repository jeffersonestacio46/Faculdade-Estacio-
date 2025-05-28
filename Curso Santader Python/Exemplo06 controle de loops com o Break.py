contador = 0

while True:
    print(contador)
    contador += 1 #Desta forma o loop seria infinito caso não houvesse um break
                  #E travaria o sistema
    if contador == 5:
        break #O break serve para forçar a parada de um loop, para que ele não seja infinido
              #Ou trave o sistema
              #O uso do break com o if para forçar a parada do loop