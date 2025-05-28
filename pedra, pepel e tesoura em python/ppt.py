import random

def get_computer_choice():
    return random.choice(['pedra', 'papel', 'tesoura'])

def determine_winner(user, computer):
    if user == computer:
        return 'empate'
    elif (user == 'pedra' and computer == 'tesoura') or \
         (user == 'papel' and computer == 'pedra') or \
         (user == 'tesoura' and computer == 'papel'):
        return 'ganhou'
    else:
        return 'perdeu'

def main():
    print("=== Jogo Pedra, Papel e Tesoura ===")
    print("Digite 'sair' para encerrar o jogo.\n")
    
    while True:
        user_choice = input("Escolha pedra, papel ou tesoura: ").strip().lower()
        
        if user_choice == 'sair':
            print("Obrigado por jogar! Até logo.")
            break
        
        if user_choice not in ['pedra', 'papel', 'tesoura']:
            print("Opção inválida. Tente novamente.\n")
            continue
        
        computer_choice = get_computer_choice()
        print(f"Computador escolheu: {computer_choice}")
        
        result = determine_winner(user_choice, computer_choice)
        
        if result == 'ganhou':
            print("Você ganhou!\n")
        elif result == 'perdeu':
            print("Você perdeu!\n")
        else:
            print("Empate!\n")

if __name__ == '__main__':
    main()

