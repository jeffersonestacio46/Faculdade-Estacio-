frutas = {"maçã", "banana", "laranja"}

#add(elemento): adiciona um elemento ao conjunto
frutas.add("pera")
print(frutas)  # Imprime {"maçã", "banana", "laranja", "pera"}

#remove(elemento): remove um elemento do conjunto. Se o elemento não existir, gera um erro
frutas.remove("banana")
print(frutas)  # Imprime {"maçã", "laranja", "pera"}

#discard(elemento): remove um elemento do conjunto se estiver presente. Se o elemento não existir, não faz nada
frutas.discard("uva")
print(frutas)  # Imprime {"maçã", "laranja", "pera"}

#clear(): remove todos os elementos do conjunto
frutas.clear()
print(frutas)  # Imprime set()