#include <unistd.h>
#include "reading.c"
#include "correct_peaces.c"
#include "chekking.c"
#include "lib.c"
#include "random.c"




void mastermind(int ac, char** av)
{
    char* code = malloc(4);
    code = NULL;
    int attempts = 10;
    for(int i = 1 ; i < ac; i++)
    {
        if(cmp(av[i], "-c")== 1)
        {
           i++;
           code = av[i]; 
        }
       if(cmp(av[i], "-t")== 1)
       {
           i++;
           attempts = atoi(av[i]);
       }
    }
        if(code== NULL)
        {
           code = generate();
        }
    printf("Will you find the secret code?\nPlease enter a valid guess\n");
    char* input;
    int welp = 0;
    int mispl = 0;
    for(int u = 0; u < attempts; u++)
    {
        int y = 0;
        while(y==0)
        {
            printf("---\nRound %d\n", u);
            write(1,">",1);
            input= reading();
            if(checking(input)==0)
            {
                 printf("Wrong input!\n");

            }   
            else
            {
                 y= 1;
            }

        }
        welp = is_wellplaced(code, input);
        mispl =is_missplaced(code, input);
        if(welp == 4)
        {
            printf("Congratz! You did it!");
            break;
        }
        printf("\nWell placed pieces: %d\n", welp);
        printf("Misplaced pieces: %d\n", mispl);
        
    }
}
int main(int ac , char** av)
{
    mastermind(ac, av);
    return 0;
}