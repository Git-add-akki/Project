import random

def game(comp,you):
    if comp==you:
        return None

    elif comp=='r':
        if you=='p':
            return True
        elif you=='s':
            return False        

    elif comp=='p':
        if you=='s':
            return True
        elif you=='r':
            return False        

    elif comp=='s':
        if you=='r':
            return True
        elif you=='p':
            return False        
    
print("computer's turn ")
randNo= random.randint(1,99)

if (randNo>=1 and randNo<=33):
    comp='r'
if (randNo>=34 and randNo<=67):
    comp='p'
if (randNo>=68 and randNo<=99):
    comp='s'


you=input("your turn : pick ,r(rock),p(paper),s(scissor)\n")
a=game(comp,you)

if a == None:
    print("The game is a tie!")
elif a:
    print("You Win!")
else:
    print("You Lose!")

print("comp number was",randNo)
print("comp selection" ,comp)
