import random

number= random.randint(1,99)

Nguess=0

while(Nguess<99):
    Nguess+=1
    print("plz take a guess\n")
    guess=int(input("enter the number\n"))

    if(guess>number):
       print("the number is lower\n")
    elif(guess<number):
       print("the number is higher\n")
    else:
       print(guess,"is right")       
       print(Nguess,"no of attempts")
       break








