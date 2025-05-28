def dobrar(numero):
    return numero * 2

numeros = [1, 2, 3, 4, 5]
dobros = map(dobrar, numeros) #O map() chama a função dobrar a cima, para que os numeros seja mutiplicados por 2
print(list(dobros))  #Saída: [2, 4, 6, 8, 10], lista saida de numeros referente a variavel escolhida acima que foi dobros
#Nesse caso, definimos uma função chamada dobrar para realizar a multiplicação por 2 e depois usamos a função map() para aplicar essa função a cada elemento da lista numeros.