// project , guessing game

#include <stdio.h>
#include<stdlib.h>//library for random no. 
#include<math.h>
int main()
{
int number,guess,nguess=1;

srand(time(0)); //to generate a different 
// no. every time u run.

number=rand()%100 +1;// to generate random no.
// (%100+1) to keep in b/w 1 to 100.

//printf("%d",number);

do{
    printf("plz take a guess\n");
scanf("%d",&guess);

if(guess>number)
{
printf("the number is lower\n");
}
else if(guess<number)
{
printf("the number is higher\n");
}

else{
printf("%d is right\n",guess);
printf("nos. of attempt %d",nguess);
}
nguess++;


}
while (number!=guess);

return 0; 
}