"""
O que o programa deve fazer:

Perguntar ao usuário:
Qual é o seu nome?
Qual é a sua idade?
Qual é o seu hobby favorito?
Qual é a sua cor favorita?
Usar as respostas para montar a seguinte frase: "Olá, [Nome]! Você tem [Idade] anos e seu hobby favorito é [Hobby]. Sua cor preferida é [Cor]."
"""

nome = str(input("Qual é seu nome?"))
idade = int(input("Qual é sua idade?"))
hobby = str(input("Qual é seu hobby?"))
cor = str(input("Qual é sua cor favorita?"))

print(f'Óla,{nome}!Você tem {idade} e seu hobby favorito é {hobby}. Sua cor favorita é {cor}')