"""
Crie um programa em Python que funcione como uma calculadora simples. O programa deve:

1.Pedir ao usuário para inserir dois números.
2.Pedir ao usuário para escolher uma operação matemática (+, -, *, /).
3.Realizar a operação escolhida nos dois números.
4.Exibir o resultado da operação de forma clara.
5.Tratar o erro de divisão por zero, exibindo uma mensagem amigável ao usuário."""

numb1 = int(input("Digite o numero 1:"))
numb2 = int(input("Digite o numero 2:"))
operacao = input("Escolha a operação desejada +,-,*,/:")

if operacao == '+':
    print("O resultado da soma é:", numb1+numb2)
elif operacao == '-':
    print("O resultado da subtração é:",numb1-numb2)
elif operacao == '*':
     print("O resultado da multiplicação é",numb1*numb2)
else:
     print("O resultado da divisão é:",numb1/numb2)
   
