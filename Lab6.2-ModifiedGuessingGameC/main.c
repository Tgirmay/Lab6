#include <stdio.h>
#include <stdlib.h>
int getRandom(int rangeMin, int rangeMax){
    const int randomInt = (rand() % ((rangeMax + 1 - rangeMin)) + rangeMin);
    return randomInt;
}

int guessingGame (int min, int max){
    int guessCount = 0;
    int num = getRandom(min, max);
    int enteredNumber = min - 1;
    char name[10];
    char currentLine[1000];
    FILE* fptr;
    fptr = fopen("history.txt", "r+");
    printf("Please enter your name \n");
    scanf("%s", &name);
    while(enteredNumber != num){
        guessCount++;
        printf("Please guess a number between %d and %d. \n" , min, max);
        scanf("%d", &enteredNumber);
        if ((enteredNumber > max) || (enteredNumber < min)){
            printf("Your guess was not between %d and %d! \n" , min, max);
        }
        else if(enteredNumber > num){
            printf("Too High!\n");
        }
        else if(enteredNumber < num){
            printf("Too Low!\n");
        }
        else if (enteredNumber = num){
            printf ("Correct! You took %d guess(es). \n", guessCount);
        }
        else{
            printf("Your guess was not between %d and %d! \n" , min, max);

        }
    }

    while (!feof(fptr)){
        fgets(currentLine, 10, fptr);
        if(currentLine == name){
            fprintf(fptr, "%s ", name);
            fprintf(fptr, "\n Score %d \n",guessCount);
            break;
        }
    }
    while (!feof(fptr)){
        fgets(currentLine, 1000, fptr);
        printf("%s", currentLine);
    }
    fclose(fptr);


    return enteredNumber;
}

int main() {
    srand(time(NULL));
    guessingGame(1,2);
    return 0;
}