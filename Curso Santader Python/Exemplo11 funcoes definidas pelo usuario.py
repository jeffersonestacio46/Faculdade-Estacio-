#o def serve para criar uma função
def calcular_media(*numeros):
    suma = sum(numeros)
    cantidad = len(numeros)
    media = suma / cantidad

print("Media:", calcular_media(10, 20, 30))

def sumar_3(x):
    return x + 3

sumar = lambda x: x + 3 #São projetas para ser compacta,e para funcao unica

print("Sumarle a 3 a un numero:", sumar(5))