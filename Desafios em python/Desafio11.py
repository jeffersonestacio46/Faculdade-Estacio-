def contar_vogais():
    """
    Pede ao usuário uma frase e conta o número de vogais nela.
    """
    frase = input("Digite uma frase: ")

    # Converter a frase para minúsculas para facilitar a comparação
    frase_minuscula = frase.lower()

    contador_vogais = 0  # Inicializa o contador de vogais

    # Definir as vogais que queremos contar
    vogais = "aeiou"

    # Iterar sobre cada caractere da frase
    for caractere in frase_minuscula:
        # Verificar se o caractere atual é uma vogal
        if caractere in vogais:
            contador_vogais += 1  # Incrementa o contador se for uma vogal

    print(f"O número de vogais na frase é: {contador_vogais}")

# Chama a função para iniciar o programa
contar_vogais()