"""
Crie um programa Python que peça ao usuário para digitar sua idade e, com base nessa idade, classifique-o em uma das seguintes categorias:

Criança: 0 a 12 anos
Adolescente: 13 a 17 anos
Adulto: 18 a 59 anos
Idoso: 60 anos ou mais
O que o programa deve fazer:

Pedir ao usuário para digitar sua idade.
Classificar a idade de acordo com as categorias acima.
Exibir a categoria correspondente à idade digitada.
(Opcional, mas recomendado) Tratar o caso em que a idade digitada não é um número inteiro válido ou é um número negativo.
"""


try:
    print("=== Descubra qual a categoria da sua idade ===")
    idade = int(input("Qual a sua idade?"))

    if idade <= 12:
        print("Você é criança!")
    elif idade <= 17:
        print("Você é adolecente!")
    elif idade <= 60:
        print("Você é adulto!")
    else:
        print("Você é idoso!")
except ValueError:
    print("Digite um valor valido!")