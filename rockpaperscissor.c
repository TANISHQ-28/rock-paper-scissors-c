#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main()
{
    int p1,p2,x=0,y=0, i=0;
    printf("Instructions for the user:\nEnter 0 to enter Rock\nEnter 1 to enter Paper\nEnter 2 to enter Scissor\n");
    while(i<3)
    {
        printf("Player 1\n");
        printf("Enter the choice:\n");
        scanf("%d", &p1);
        if(p1==0)
        {
            printf("Rock\n");
        }
        else if ( p1==1 )
        {
            printf("Paper\n");
        }
        else if(p1==2)
        {
            printf("Scissor\n");
        }
        else
        {
            printf("Invalid entry\n");
        }
        srand(time(NULL));
        p2= rand()%3;
        printf("Player 2:\n");
        if(p2==0)
        {
            printf("Rock\n");
        }
        else if ( p2==1 )
        {
            printf("Paper\n");
        }
        else if(p2==2)
        {
            printf("Scissor\n");
        }
        else
        {
            printf("Invalid entry\n");
        }
        if(p1==p2)
        {
            printf("Tie (No points)\n");
        }
        if(p1==0 && p2==1)
        {
            printf("Player 2 wins\n");
            y++;
        }
        if(p1==0 && p2==2)
        {
            printf("Player 1 wins\n");
            x++;
        }
        if(p1==1 && p2==0)
        {
            printf("Player 1 wins\n");
            x++;
        }
        if(p1==1 && p2==2)
        {
            printf("Player 2 wins\n");
            y++;
        }
        if(p1==2 && p2==0)
        {
            printf("Player 2 wins\n");
            y++;
        }
        if(p1==2 && p2==1)
        {
            printf("Player 1 wins\n");
            x++;
        }
        i++;
    }
    if(x>y)
    {
        printf("Player one wins with %d points\n", x);
    }
    else
    {
        printf("Player two wins with %d points\n", y);
    }
    return 0;
}
