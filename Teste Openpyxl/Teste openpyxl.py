import openpyxl
#Criar uma planilha(book)
book = openpyxl.Workbook()
#Como visualizar paginas existentes
print(book.sheetnames)
#como criar uma pagina
frutas_page = book.create_sheet('Frutas')
#como selecionar uma pagina
frutas_page.append(['Banana', 5, 'R$3,90'])
frutas_page.append(['Fruta 2', 2, 'R$15,90'])
frutas_page.append(['Fruta 3', 10, 'R$30,90'])
frutas_page.append(['Fruta 4', 2, 'R$50,50'])
#Salvar a planilha
book.save('Planilha de Compras2.xlsx')