"""
Desafio Python para Iniciantes: Calculador de Média de Notas
O Desafio:

Crie um programa Python que peça ao usuário para digitar três notas (valores numéricos) e, em seguida, calcule e exiba a média aritmética dessas notas. O programa também deve informar se o aluno foi Aprovado (média maior ou igual a 7.0) ou Reprovado (média menor que 7.0).

O que o programa deve fazer:

Pedir ao usuário para digitar a primeira nota.
Pedir ao usuário para digitar a segunda nota.
Pedir ao usuário para digitar a terceira nota.
Calcular a média das três notas.
Exibir a média calculada, formatada com duas casas decimais.
Informar se o aluno está "Aprovado" ou "Reprovado" com base na média.
(Opcional, mas recomendado para um programa robusto) Tratar o caso em que o usuário não digita um número válido para as notas.

Dicas para Resolver:

Use a função input() para obter as notas como strings.
Converta as strings de entrada para números de ponto flutuante (float()) para permitir notas decimais.
Para calcular a média, some as três notas e divida por 3.
Use f-strings e formatação para exibir a média com duas casas decimais (ex: f"{variavel:.2f}").
Use estruturas condicionais (if, else) para verificar se a média é de aprovação ou reprovação.
Para a parte opcional de tratamento de erro, use um bloco try-except com ValueError ao converter as entradas para float.

"""
try:
    print("===Saiba sua media ===")
    nota1 = float(input("Digite a primeira nota:"))
    nota2 = float(input("Digite a sua segunda nota:"))
    nota3 = float(input("Digite a sua terceira nota:"))
    media = (nota1+nota2+nota3)/3
    print(f'Sua media é:{media}')

    if media >= 7:
        print("Você foi aprovado!")
    else:
        print("Você foi reprovado")
except ValueError:
    print("Formato de nota invalida!")
