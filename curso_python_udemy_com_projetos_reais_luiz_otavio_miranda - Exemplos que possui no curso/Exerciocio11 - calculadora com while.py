"""Calculadora com while"""


while True:
    try:
        sair = input('Deseja continuar? S/N')
        numb1 = int(input('Digite o primeiro numero:'))
        numb2 = int(input('Digite o segundo numero:'))
        operadores = input('Digite um operador:+,-,*,/')

        if sair == 'n':
            print('Até mais!')
            break
            if sair == 's':
                continue
            if operadores == '+':
                print('A soma é:', numb1+numb2)
            elif operadores == '-':
                print('A subtração é:', numb1-numb2)
            elif operadores == '*':
                print('A multiplicação é:', numb1*numb2)
            else:
                print('A divisão é:', numb1/numb2)
        
    except ValueError:
        print('Impossivel realizar essa operação')