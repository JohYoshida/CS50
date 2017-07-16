#include <stdio.h>
#include <cs50.h>

// Print a pyramid to a user-defined height (up to 23)
int main(void){
  int h;
    //check height
    do
    {
        printf("Height: ");
        h = get_int();
    }
    while(h < 0 ||  h > 23);
    //for every row...
    for (int i = 0; i < h; i++)
    {
        //print spaces
        for (int space = h-i-1; space > 0; space--)
        {
            printf(" ");
        }
        //print hashes
        for (int hash = 0; hash < 2+i; hash++)
        {
            printf("#");
        }
        //print new line
        printf("\n");
    }
}
