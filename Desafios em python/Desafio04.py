nota1 = int(input("Qual foi sua primeira nota?"))
nota2 = int(input("Qual foi segunda nota?"))

media = (nota1 + nota2) / 2
print("Sua media foi:", media)

if media >= 6:
    print("Você foi aprovado!")
elif media >= 5:
    print("Você poderá fazer uma prova substituta!")
else:
    print("Você foi reprovado!")