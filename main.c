#include <stdio.h>
#include <stdlib.h>

int main()
{
   int userinput;

    do {

            printf("Choose an option: \nl. New Game\n2. Load Game\n3. More Options\n4. Quit\n\nYour Selection: ");

            scanf("%d", &userinput);
            switch(userinput)
            {
            case 1:
                printf("you chose a new game!\n");
                break;
            case 2:
                printf("you chose load game!\n");
                break;
            case 3:
                printf("you chose more options!\n");
                break;
            case 4:
                printf("you chose quit!\n");
                break;

            }
    }
    while(userinput != 4);





    //printf("Hello world!\n");
    return 0;
}
