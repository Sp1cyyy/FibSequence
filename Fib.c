//Program creates a fibonacci sequence and prints the values
//Created by Ryan Sharma 22/03/19

#include <stdio.h>

int main(int argc, char *argv[]){
    
    int spore = 1;
    int day = 1;
    int prespore = 0;
    
    //Give the value of spore on day 1
    printf("Day 1: Number of spores = 1\n");
    
    //Calculates the Fib Sequence which give the spores on any given day after day 1
    while(spore<=10000000){
        day = day + 1;
        spore = spore + prespore;
        prespore = spore - prespore;
        printf("Day %d: Number of spores = ", day);
        printf("%d\n", spore);
    }
    return 0;
}