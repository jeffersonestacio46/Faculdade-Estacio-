""""
iterardo strings com while
"""

nome = 'Jefferson Oliveira' #as strings são interáveis

tamanho_nome =len(nome)
print(nome)
print(tamanho_nome)

indice = 0
novo_nome = ''
while indice < len(nome):
    letra =nome[indice]
    novo_nome += f'&{letra}' #adicionando asteriscos, com um treino de acumulação de valores usando while
    indice += 1

print(novo_nome)