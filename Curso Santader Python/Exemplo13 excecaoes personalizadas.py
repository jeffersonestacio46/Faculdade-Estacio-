def funcao():
    # Código que pode gerar uma exceção personalizada
   # if condicao:
        raise Exception("Descrição do erro")


try:
    funcao()
except Exception as e:
    print(f"Erro: {str(e)}")