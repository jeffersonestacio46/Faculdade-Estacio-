import openpyxl
wb = openpyxl.Workbook()
wb.create_sheet('teste')#usamos o create_sheet para criar planiha
wb.remove(wb['Sheet'])#Estou removendo a planilha padrão com o .remove, e Sheet está em uma lista, pois ela será excluida
#print(wb.sheetnames) usa para conferior as planilhas que tem no Excel

planilha_teste = wb['teste']#atribuindo o o workbook em colchetes
#Adiconando valor de cada coluna
planilha_teste.append(['valor 1', 'valor 2', 'valor 3', 'cimento'])#Tem que criar lista para adicionar em cada celula no excel
planilha_teste['E1'] = 'bloco'#Colocando em colchete, posso direcionar onde quero que seja exibido o que irei escrever na celula informada
wb.save('teste.xlsx')

#import openpypyxl.open
#wb = Wookbook()
#wb.open('Gasto com gado.xlsx')

