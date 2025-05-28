""""
Exercio
Peça ao usuario para digitar seu nome
peça ao usuario digitar sua idade
se nome e idade forem digitados:
    Exiba:
    Seu nome é {nome}
    Seu nome invertido é {nome invertido}
    se o nome contem (ou não espaços)
    seu nome tem {n} letras
    a primeira letra do seu nome é {letra}
se nada for digitado em nome e idade exiba:
"Desculpe, você deixou campos vazio"
"""

nome = input('Digite seu nome:')
idade = input('Digite sua idade:')

if nome and idade:
    print(f'Seu nome é {nome}')
    print(f'Seu nome invertido é {nome[::-1]}')#Os 2 campois ficarfam vazios, pois o ponto de partida é -1
    
    if '' in nome:
        print('Seu nome contem espaços')
    else:
        print('Seu nome não contem espaços')

    print(f'Seu nome contem {len(nome)} letras')
    print(f'A primeira letra do seu nome é {nome[0]}')#Com o 0 pego a primeira letra do meu nome
    print(f'A ultima letra do seu nome é {nome[-1]}')#Com o -1 pego a ultima letra do meu nome

else:
    print("Desculpe, você deixou campos vazios")