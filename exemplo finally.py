def teste_finally():
    try:#no try sempre colocar o codigo que quer executar
        print("Tentando fazer algo...")
        # raise ValueError("Simulando um erro!") # Descomente para ver o erro acontecer
        print("Deu tudo certo!")
    except ValueError as e:#Sempre coloca caso haja algum erro, para que possa ser identificado
        print(f"Ocorreu um erro: {e}")
    finally:#independendo do que aconteça, vai ser exibido
        print("Isso sempre vai acontecer no final.")

teste_finally()

#try: Tenta executar um código.
#except: Se der um erro específico no try, executa este código.
#finally: Executa este código sempre, no final, aconteça o que acontecer no try.