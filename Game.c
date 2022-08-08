//Creating Rock, Paper & Scissors Game with C language :)
// Player 1: rock
// Player 2 (computer): scissors -->player 1 gets 1 point
// rock vs scissors - rock wins
// paper vs scissors - scissors wins
// paper vs rock - paper wins
// Notes: You have to display name of the player during the game. Take users name as an input from the user.


#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>

int main()
{
    
    int N;
    int p1 = 0, p2 = 0, num1, num2;
    char name[15];
    printf("\n\n\t\tLOADING");
    for (int i = 0; i < 10; i++)
    {
        printf(". ");
        Sleep(200);
    }
    system("CLS");
    printf("\n\t\tWelcome to world of Rock, Paper and Scissors Game!!!\n\n");
    printf("\t\t----------------------------------------------------\n\n");
    printf("Player's first Name: ");
	scanf("%s]", &name);

    printf("Enter number of times you want to play: ");
    scanf("%d", &N);

    printf("Press 0, 1, 2 for the following..... \n 0. Rock\n 1. Paper\n 2. Scissors\n\n");
    
    for (int i = 0; i < N; i++)
    {
        printf("%s's turn: ", name);
        scanf("%d", &num1);

        srand(time(NULL));
        num2 = rand()%3;
        printf("Computer's turn: %d\n", num2);

        if (num1 == 0 && num2 == 1)
        {
            p2+=1;
        }
        else if (num1 == 0 && num2 == 2)
        {
            p1+=1;
        }
        else if (num1 == 1 && num2 == 2)
        {
            p2+=1;
        }
        else if (num1 == 1 && num2 == 0)
        {
            p1+=1;
        }
        else if (num1 == 2 && num2 == 0)
        {
            p2+=1;
        }
        else if (num1 == 2 && num2 == 1)
        {
            p1+=1;
        } 

        printf("Score is\n %s : %d points \n Computer : %d points\n\n", name, p1, p2);
        
    }

    printf("_________________________________________\n");
    printf("*****************************************\n\n");

    if (p1 > p2)
    {
        printf("AND!!!!!!! The Winner is %s with %d points\n", name, p1-p2);
    }
    else if (p1 < p2)
    {
        printf("%s! You lose the game:\n");
    }
    else{
        printf("It's a Tie!!!!!!!!\n");
    }
    
    printf("\n\t\t\t ~~~~~ Made With Love By Shubham Singh Raput ~~~~~ \t\t\t\n"); 
    return 0;
}


