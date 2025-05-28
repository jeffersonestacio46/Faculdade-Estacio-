"""
O que o programa deve fazer:

Pedir ao usuário para digitar um número inteiro.
Verificar se o número digitado é par ou ímpar.
Exibir uma mensagem clara na tela informando o resultado.
(Opcional, mas recomendado para iniciantes) Tratar o caso em que o usuário não digita um número inteiro válido.
"""

try:
    numero = int(input("Digite um numero:"))
    if numero % 2:
        print(f'O número {numero} é impar!')
    else:
        print(f'O numero {numero} é par!')
except ValueError:
    print("Entrada invalida, por favor digite um numero inteiro")

finally:
    print("É isso!")
        
