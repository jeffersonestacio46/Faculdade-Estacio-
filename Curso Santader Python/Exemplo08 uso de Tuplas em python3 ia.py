minha_tupla = ('maçã', 'banana', 'laranja', 'banana')

# Encontrando o índice da primeira ocorrência de 'banana'
indice_banana = minha_tupla.index('banana')
print(f"A primeira ocorrência de 'banana' está no índice: {indice_banana}")

# Encontrando o índice de 'laranja'
indice_laranja = minha_tupla.index('laranja')
print(f"A 'laranja' está no índice: {indice_laranja}")

# Tentando encontrar um valor que não existe (isso causará um erro)
# indice_uva = minha_tupla.index('uva')
# print(indice_uva)