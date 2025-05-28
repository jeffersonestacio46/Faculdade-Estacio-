def funcao():
    variavel_local = 10
    print(variavel_local)  # Acessível dentro da função


variavel_global = 20


def funcao2():
    print(variavel_global)  # Acessível de qualquer lugar


funcao()  # Imprime 10
funcao2()  # Imprime 20
print(variavel_global)  # Imprime 20
#print(variavel_local)  # Gera um erro, a variável não está definida neste escopo, devido ao fato de fazer parte da primeira funcao