/*This program is for the word puzzle game hangman*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    //variable to store the word used in the puzzle
    char word[90];

    //prompt user to enter the word
    printf("Please enter a word for the puzzle: ");
    scanf("%s", word);

    //declaring a variable to store number of letters in the word
    int word_length = strlen(word);

    //for loooop to print the entered word but with blanks in between to create a puzzle
    for(int i=0; i<word_length; i++)
    {
        if(i%2==0){printf("%c", word[i]);}
        else{printf("_");}
    }
    printf("\n");

    //using a for loop to fill up the gaps
    for(int j=1; j<word_length; j+=2)
    {
        //variable to store entered letter
        char missing_letter;
        
        //prompt user to enter missing letter
        printf("please enter the missing letter: ");
        scanf(" %c", &missing_letter);

        //verifying letter
        if(missing_letter==word[j])
        {
            printf("nicely done!\n");
        }
        else
        {
            printf("wrong letter, go again\n");
            j-=2;
        }
    }
    printf("congrats! You completed the puzzle");

    return 0;
}