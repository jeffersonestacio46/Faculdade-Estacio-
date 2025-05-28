a = 10
b = 3

resultado_and = (a > 5) and (b < 5) #True Devolve true se ambas condições forem verdadeiras
resultado_or = (a > 15) or (b < 5) # True Devolve se ao menos uma condição for verdadeira
resultado_not = not(a > 5) #False inverte valors da condição, devolve True se a afirmação for falsa

#Para exibir verdadeiro e falso em Python usa as chaves '{}'
print(f"Resultado do 'and': {resultado_and}")
print(f"Resultado do 'or': {resultado_or}")
print(f"Resultado do 'not': {resultado_not}")