#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char name[30];
    int age;
    printf("welcome to the quiz..\n");
    
    int isValid = 0; // Flag to track if the name is valid
    
    while (!isValid)
    {
        printf("\nEnter your name: \n");
        scanf("%s", name);
        
        int i;
        isValid = 1; // Assume the name is valid initially
        
        for (i = 0; name[i] != '\0'; i++)
        {
            if (!isalpha(name[i]))
            {
                isValid = 0; // Set isValid to 0 if any non-alphabetic character is found
                break;
            }
        }
        
        if (!isValid)
        {
            printf("\nInvalid username. Please enter the correct name.\n");
        }
    }
    
    printf("\nEnter your age: \n");
    scanf("%d", &age);
    char useranswer[30], correctanswer1[]="msdhoni", correctanswer2[]="messi", correct[]="westindies", foot[]="sunilchetri";
    int c;
    printf("\nCricket 1 \n Football 2 \n enter your choice(1/2)\n");
    scanf("%d", &c);
    switch (c)
    {
	    case 1: printf("\nQuestion no.1-\n");
		    printf("\nwho is the only captain to win all three icc trophies??\n");
		    printf("msdhoni \n virat kolhi \n ricky pointing \n don bradman \n");
		    scanf("%s", &useranswer);
		    if (strcmp(useranswer,correctanswer1)==0)
		    {
			    printf("\ncorrect answer\n");
		    }
		    else
		    {
			    printf("\nwrong answer..\n");
			    printf("\nthe correct answer is msdhoni\n");
		    }
		    printf("\nQuestion no.2-\n");
		    printf("\nwho won the t20 world cup 2016??\n");
		    printf("\nindia \n australia \n westindies \n england \n");
		    scanf("%s", &useranswer);
		    if (strcmp(useranswer,correct)==0)
		    {
			    printf("\ncorrect answer\n");
		    }
		    else
		    {
			    printf("\nwrong answer\n");
			    printf("\nthe correct answer is westindies\n");
	            }
		    break;

	    case 2: printf("\nQuestion no.1-\n");
		    printf("\nwho has completed the football\n");
		    printf("\nronaldo \n messi \n mpbappe \n sunil chetri \n");
		    scanf("%s", &useranswer);
		    if (strcmp(useranswer,correctanswer2)==0)
	            {
			    printf("\ncorrect answer..\n");
	            }
		    else 
		    {
			    printf("\nwrong answer..\n");
		    	    printf("\nthe correct answer is messi\n");
		    }	
		    printf("\n Question no.2-\n");
		    printf("\n who is the highest goal scorer from india\n");
		    printf("\n messi \n ronaldo \n sunilchetri \n neymar\n");            
		    scanf("%s", &useranswer); 
		    if (strcmp(useranswer,foot)==0)
		    {
			    printf("\ncorrect answer\n");
	            }
		    else
	            {
			    printf("\nwrong answer\n");
			    printf("\nthe correct answer is sunilchetri..\n");
	            }
   }
}
