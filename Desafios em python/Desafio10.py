def lista_de_compras():
    """
    Permite ao usuário criar uma lista de compras, adicionando itens
    até que ele decida parar.
    """
    lista_compras = []  # Inicia uma lista de compras vazia
    adicionar_mais = "sim"  # Variável de controle para o loop

    print("--- Montador de Lista de Compras ---")

    # Loop para adicionar itens
    while adicionar_mais.strip().lower() == "sim" or adicionar_mais.strip().lower() == "s":
        resposta = input("Deseja adicionar um item à lista de compras? (sim/não): ")
        resposta_formatada = resposta.strip().lower()

        if resposta_formatada == "sim" or resposta_formatada == "s":
            item = input("Qual item deseja adicionar? ")
            lista_compras.append(item.strip()) # Adiciona o item (com espaços removidos)
        elif resposta_formatada == "nao" or resposta_formatada == "não" or resposta_formatada == "n":
            adicionar_mais = "nao" # Altera a variável para sair do loop
        else:
            print("Resposta inválida. Por favor, digite 'sim' ou 'não'.")

    # Exibir a lista de compras final
    print("\n--- Sua lista de compras ---")
    if lista_compras: # Verifica se a lista não está vazia
        for item in lista_compras:
            print(f"- {item}")
    else:
        print("Sua lista de compras está vazia.")

# Chama a função para iniciar o programa
lista_de_compras()


"""
Explicação da Solução:

lista_de_compras(): A função principal que encapsula toda a lógica do programa.

lista_compras = []: Inicializa uma lista vazia. É nela que todos os itens que o usuário digitar serão armazenados.

adicionar_mais = "sim": Esta variável de controle é usada para decidir se o loop while deve continuar. Ela começa com "sim" para que o loop seja executado pelo menos uma vez.

while adicionar_mais.strip().lower() == "sim" or adicionar_mais.strip().lower() == "s"::

Este é o coração do programa. O loop while continuará executando enquanto a variável adicionar_mais (depois de remover espaços extras e converter para minúsculas) for igual a "sim" ou "s".
.strip() e .lower(): São usados aqui para garantir que a resposta do usuário ("Sim ", " SIM ", "sIm") seja tratada corretamente como "sim".
resposta = input(...) e resposta_formatada = resposta.strip().lower(): Pede ao usuário se ele quer adicionar um item e formata a resposta para facilitar a comparação.

if resposta_formatada == "sim" or resposta_formatada == "s"::

Se o usuário quer adicionar, o programa pede o nome do item.
lista_compras.append(item.strip()): O item digitado é adicionado à lista usando o método .append(). item.strip() é usado para remover quaisquer espaços extras que o usuário possa ter digitado no início ou fim do nome do item.
elif resposta_formatada == "nao" or resposta_formatada == "não" or resposta_formatada == "n"::

Se o usuário disser "não", a variável adicionar_mais é alterada para "nao". Na próxima vez que o while verificar sua condição, ela será falsa, e o loop terminará.
else:: Captura qualquer outra resposta inválida do usuário e informa que a resposta não foi reconhecida.

Exibição da Lista:

if lista_compras:: Verifica se a lista não está vazia (se estiver vazia, avalia como False). Isso evita imprimir "Sua lista de compras está vazia." e depois um loop vazio.
for item in lista_compras:: Itera sobre cada item na lista e o imprime, prefixado com um hífen para melhor apresentação.
else: print("Sua lista de compras está vazia."): Se a lista estiver vazia (o usuário nunca adicionou nada ou desistiu logo no início), esta mensagem é exibida.
Este código demonstra bem o uso de loops while, condicionais if/elif/else, manipulação de strings (.strip(), .lower()) e listas (.append()) - todos conceitos fundamentais para iniciantes em Python!
"""