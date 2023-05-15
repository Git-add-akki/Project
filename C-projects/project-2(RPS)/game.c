#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int game(char you,char comp)
{
    if(you==comp)
    {
        return 0;
    }
    if (you=='r'&& comp=='p')
    {
        return -1;
    }
    else if(you=='p'&& comp=='r')
    {
        return 1;
    }

        if (you=='r'&& comp=='s')
    {
        return 1;
    }
    else if(you=='s'&& comp=='r')
    {
        return -1;
    }
    if (you=='p'&& comp=='s')
    {
        return -1;
    }
    else if(you=='s'&& comp=='p')
    {
        return 1;
    }
}
int main()
{
   int number;
   char you,comp;
   srand(time(0));
   number = rand()%100+1;
   
   if(number<=33)
   {
    comp='r';
   }
   else if(number<=66 && number>=34)
   {
    comp='s';
   }
   else
   {
    comp='p';
   }

   printf("enter r for rock, p for paper,s for scissor\n");
   scanf("%c",&you);
   int result =game(you,comp);
   if(result==1)
   {
   printf("you win \n"); 
   }
   else if(result==-1)
   {
   printf("computer win \n"); 
   }
   else 
   {
    printf("draw \n");
   }
   printf("the com value is %c and your value is %c\n",comp,you);
   printf("computer number was %d \n",number);
return 0;
}