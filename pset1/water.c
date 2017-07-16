#include <stdio.h>
#include <cs50.h>

// Report a user’s water usage, converting minutes spent in the shower to bottles of drinking water.
int main(void){
  // Prompt user for shower length in minutes (positive int)
  printf("How many minutes do you shower for? ");
  int minutes = get_int();

  // convert minutes to bottles of water
  int bottles = m * 12;

  // Print the equivalent number of bottles (positive int)
  printf("Your shower used %i bottles of water!\n", bottles);
}
