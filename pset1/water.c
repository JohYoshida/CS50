#include <stdio.h>

// Report a user’s water usage, converting minutes spent in the shower to bottles of drinking water.
int main(void){
  // Prompt user for shower length in minutes (positive int)
  int minutes;
  printf("How many minutes do you shower for? ");
  scanf("%d", &minutes);

  // convert minutes to bottles of water
  int bottles = minutes * 12;

  // Print the equivalent number of bottles (positive int)
  printf("Your shower used %i bottles of water!\n", bottles);
}
