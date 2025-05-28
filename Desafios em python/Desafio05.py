def analisar_texto(texto):
    """
    Analisa um texto e retorna informações sobre seu tamanho, palavras e ocorrências.

    Args:
        texto: A string a ser analisada.

    Returns:
        Um dicionário contendo o tamanho do texto, uma lista de palavras e um
        dicionário com a contagem de ocorrências de cada palavra (em minúsculas).
    """
    tamanho = len(texto)
    palavras = texto.split()
    ocorrencias = {}

    for palavra in palavras:
        palavra_minuscula = palavra.lower()
        if palavra_minuscula in ocorrencias:
            ocorrencias[palavra_minuscula] += 1
        else:
            ocorrencias[palavra_minuscula] = 1

    return {
        'tamanho': tamanho,
        'palavras': palavras,
        'ocorrencias': ocorrencias
    }

# Testando a função com o exemplo:
texto_exemplo = "Este é um teste simples para testar o Python."
resultado = analisar_texto(texto_exemplo)
print(resultado)

# Outro exemplo para testar:
texto_exemplo_2 = "O rato roeu a roupa do rei de Roma. O rei estava irritado."
resultado_2 = analisar_texto(texto_exemplo_2)
print(resultado_2)