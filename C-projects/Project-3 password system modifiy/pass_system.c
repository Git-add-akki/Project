
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>
// #include<unistd.h>

FILE * fp;
int x=0;

char passcode[11]="1204";
char code[11],ch;

void openfile(){
  fp = fopen("data.txt","r");
  if(fp==NULL)
  {
    printf("\n\t\t file can't be opened\n");
  }
  else{
    printf("\n\t\t opening file ...wait\n");
    do{
        ch=fgetc(fp);
        printf("%c",ch);
    }while(ch!=EOF);
    fclose(fp);
    printf("\n\t\t file has been closed\n");
  }
}

void check(){
    again:
    system("cls"); //using for clearing screen
    printf("\n\t\t enter the file password\n");
    gets(code);
    fflush(stdin);
    if(strcmp(code,passcode)==0)
    openfile();
    else{
    x++;
    while(x<5){    
    if(x==1){
    printf("\n\t\t wrong password try again,3 chances are left\n");
    Sleep(500); 
    goto again;
            }
    else if(x==2){
    printf("\n\t\t wrong password try again,2 chances are left\n");
    Sleep(500); 
    goto again;
                 } 
       else if(x==3){
    printf("\n\t\t wrong password try again,this is your last chance\n");
    Sleep(500); 
    goto again;
                      }
       else if(x==4){
       printf("\n\t\t wrong password ,you are not authorised to access\n");
       Sleep(500); 
       exit(0);
             }
        }
}
}
int main()
{
check();
return 0;
}