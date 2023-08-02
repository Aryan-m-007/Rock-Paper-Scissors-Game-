import random

print("Computer's Turn: Rock(r), Paper(p) or Scissors(s)")
num_random = random.randint(1,3)
if num_random==1:
    comp = 'r'
elif num_random==2:
    comp = 'p'
elif num_random==3:
    comp = 's'

player = input("Your Turn: Rock(r), Paper(p) or Scissors(s): ")

print(f"Computer chose: {comp}")
print(f"Player chose: {player}")


def play(comp, player):
    if comp==player:
        return("It's a tie.")
    
    elif comp=='r'and player=='p':
            return("Player Wins!!!")
    elif comp=='r'and player=='s':
            return("Computer Wins!!!")

    elif comp=='p'and player=='r':
            return("Computer Wins!!!")
    elif comp=='p'and player=='s':
            return("Player Wins!!!")

    elif comp=='s'and player=='r':
            return("Player Wins!!!") 
    elif comp=='s'and player=='p':
            return("Computer Wins!!!")

z=play(comp, player)
print(z)