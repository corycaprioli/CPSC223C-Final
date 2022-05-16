//Cory Caprioli
//cory.caprioli@csu.fullerton.edu
//final exam program may 16 2022

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "struct.h"

int main() {
  char option;
  int pos;
  FILE * binary_file = fopen("file.bin", "w+b");

  printf("Welcome to Moring Glory Lender, LLC\n");
  printf("CEO: Cory Caprioli\n\n");

  printf("Please select an option:\n");
  printf("\tA: Append a new customer\n");
  printf("\tL: Show all customers\n");
  printf("\tR: Show one customer\n");
  printf("\tU: Update a customer\n");
  printf("\tQ: Leave this program\n\n");

  while(option != 'Q') {
    printf("Please enter an option:\n");
    scanf("%c", &option);

    if(option == 'A') {
      k
    } else if(option == 'L') {

    } else if(option == 'R') {
      printf("What is the position number: ");
      scanf("%d", &pos);

    } else if(option == 'U') {
      printf("What is the position of the customer to be upadte: ");
      scanf("%d", &pos);

    } else if(option == 'Q') {
      fclose(binary_file);
      printf("The binary file was saved for future use.\n Have a great day.");
      return 0;
    }
  }

  return 0;
}
