/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: armad
 *
 * Created on November 4, 2018, 3:47 PM
 */

#include <stdio.h>
#include <stdlib.h>


/*
 * 
 */
int main() {
   int guessCount;
   int guessingGame (int num,int min, int max){
   int enteredNumber = min - 1;
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
     else{
         printf ("Correct! You took %d guess(es). \n", guessCount);
     }  
   }
   return enteredNumber;
   }

    guessingGame(24, -1,29); 
    return (EXIT_SUCCESS);
}

