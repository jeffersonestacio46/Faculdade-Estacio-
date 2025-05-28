qutd_linhas = 5
qtd_colunas = 5

linha = 1
while linha <= qutd_linhas:
    coluna = 1
    print(linha)
    while coluna <= qtd_colunas:
        print(f'{linha=}, {coluna=}')
        coluna += 1
    linha += 1

print('Acabou')