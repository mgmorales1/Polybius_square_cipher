#include <stdio.h>
#include <stdlib.h>

int main (void) {
    /* Double array of 5x5 implements a permutation
    of the Polybius Square Cipher with 25 letters
    of the alphabet */
    char square[5][5] = {
        {'l', 'a', 'b', 'o', 'r'},
        {'c', 'd', 'e', 'f', 'g'},
        {'h', 'i', 'j', 'k', 'm'},
        {'n', 'p', 's', 't', 'u'},
        {'v', 'w', 'x', 'y', 'z'}
    };
     /* Array of characters that stores the input */
    char input[100];
    fgets(input, sizeof(input), stdin);
    
    int k = 0;
    /* Checks for valid input */
    if ((sizeof(input)- 1) % 2 != 0) {
        /* Reads the input and retrieves the character
        at the location specified by each pair of numbers*/
        while (input[k] != '\n') {
            printf("%c", square[(int)(input[k] - '0')][(int)(input[k + 1] - '0')]);
            k+=2;
        }
    } else {
        printf("Invalid input, try again\n");
    }
     
    
    printf("\n");

    return EXIT_SUCCESS;
}
