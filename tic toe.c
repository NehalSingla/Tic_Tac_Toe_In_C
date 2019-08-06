#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
# define rows 5
# define colm 11


void create_matrix(char arr[rows][colm] )
{

    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<colm;j++)
        {
            if(i==1 || i==3)
            {
                arr[i][j]= '-';

            }
            else if(j==3 || j==7)
            {
                arr[i][j]='|';
            }
            else
                arr[i][j]=' ';
        }
    }
    //return arr;
    //print_matrix(arr);
}
   void print_matrix(char arr[rows][colm])
   {
      system("cls");
       for(int i=0;i<rows;i++)
       {

           for(int j=0;j<colm;j++)
           {

               printf("%c",arr[i][j]);
           }
           printf("\n");
       }
   }
   void fill_option(char arr[rows][colm],int a,int num)
   {
       if(a==1)
       {
           if(num==1)
            arr[0][1]='0';
           if(num==2)
            arr[0][5]='0';
           if(num==3)
            arr[0][9]='0';
           if(num==4)
            arr[2][1]='0';
            if(num==5)
            arr[2][5]='0';
            if(num==6)
            arr[2][9]='0';
            if(num==7)
            arr[4][1]='0';
            if(num==8)
            arr[4][5]='0';
            if(num==9)
            arr[4][9]='0';

       }
       else if(a==2)
       {
           if(num==1)
            arr[0][1]='X';
           if(num==2)
            arr[0][5]='X';
           if(num==3)
            arr[0][9]='X';
           if(num==4)
            arr[2][1]='X';
            if(num==5)
            arr[2][5]='X';
            if(num==6)
            arr[2][9]='X';
            if(num==7)
            arr[4][1]='X';
            if(num==8)
            arr[4][5]='X';
            if(num==9)
            arr[4][9]='X';


       }
   }
       int check(char arr[rows][colm])
      {
       if(arr[0][1]=='0' && arr[2][1]=='0')
       {
           if(arr[4][1]=='0')
            return 1;

       }
        if(arr[0][1]=='0' && arr[0][5]=='0')
       {
           if(arr[0][9]=='0')
            return 1;

       }
        if(arr[0][5]=='0' && arr[2][5]=='0')
       {
           if(arr[4][5]=='0')
            return 1;

       }
        if(arr[2][1]=='0' && arr[2][5]=='0')
       {
           if(arr[2][9]=='0')
           return 1;

       }
        if(arr[4][1]=='0' && arr[4][5]=='0')
       {
           if(arr[4][9]=='0')
           return 1;

       }
        if(arr[0][9]=='0' && arr[2][9]=='0')
       {
           if(arr[4][9 ]=='0')
           return 1;

       }


       // second player


        if(arr[0][1]=='X' && arr[2][1]=='X')
       {
           if(arr[4][1]=='X')
            return 2;

       }
        if(arr[0][1]=='X' && arr[0][5]=='X')
       {
           if(arr[0][9]=='X')
            return 2;

       }
        if(arr[0][5]=='X' && arr[2][5]=='X')
       {
           if(arr[4][5]=='X')
            return 2;

       }
        if(arr[2][1]=='X' && arr[2][5]=='X')
       {
           if(arr[2][9]=='X')
           return 2;

       }
        if(arr[4][1]=='X' && arr[4][5]=='X')
       {
           if(arr[4][9]=='X')
           return 2;

       }
        if(arr[0][9]=='X' && arr[2][9]=='X')
       {
           if(arr[4][9 ]=='X')
           return 2;
       }
 }


int main()
{
     int num1,num2;
    char choice;
     int b;
       char arr[rows][colm];
    start:


    create_matrix(arr);
    char name1[20];
    char name2[20];
    printf("Enter name of Player 1 : ");
    scanf("%s",name1);
     printf("Enter name of Player 2: ");
    scanf("%s",name2);
     print_matrix(arr);

    while(1)
    {
        printf("player 1 :\n");
        printf("enter ur choice : ");
        scanf("%d",&num1);
       fill_option(arr,1,num1);
        print_matrix(arr);
      b = check(arr);
        if(b==1)
        {
            printf("Player 1 wins\n");
            printf("Do u want to continue(y/n) : ");
            scanf("%c",choice);
            if(choice=='y')
            {
                system("cls");
                goto start;
            }
                else
                {
                    printf("game over");
                    break;


                }


        }
        if(b==2)
        {
            printf("Player 2 wins\n");
            printf("Do u want to continue(y/n) : ");
            scanf("%c",choice);
            if(choice=='y')
            {
                 system("cls");
                goto start;
            }

               else
                    printf("Game over");
                    break;
        }

       printf("player 2 :\n");
        printf("enter ur choice : ");
        scanf("%d",&num1);
       fill_option(arr,2,num1);
        print_matrix(arr);
        b = check(arr);
        if(b==1)
        {
            printf("Player 1 wins\n");
            printf("Do u want to continue(y/n) : ");
            scanf("%c",choice);
            if(choice=='y')
                 {
                     system("cls");
                goto start;
                 }
               else
                 printf("Game over");
                break;


        }
        if(b==2)
        {
            printf("Player 2 wins\n");
            printf("Do u want to continue(y/n) : ");
            scanf("%c",choice);
            if(choice=='y')
            {
                 system("cls");
                goto start;
            }

               else
                    printf("Game over");
                    break;
        }


    }

}
