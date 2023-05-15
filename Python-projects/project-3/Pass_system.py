passcode='1224'
passcode=int(passcode)
# ncode='1224'

print(" welcome ....... ")

x=0
x=int(x)


while (x<2):
    ncode=int(input("enter the password"))
    if ncode==passcode:
      f=open('vault.txt','r')
      t=f.read()
      f.close()
      print(t)
    else:
      print("sorry wrong password")
      print("try again")
    x+=1



print("sorry, you are not allowed to enter")  
