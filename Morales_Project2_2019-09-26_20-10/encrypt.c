#include <stdio.h>
#include <stdlib.h>

int main (void) {
    /* Double array of 5x5 that implements a permutation
    of the Polybius Square Cipher with 25 letters
    of the alphabet */
    char square[5][5] = {
        {'l', 'a', 'b', 'o', 'r'},
        {'c', 'd', 'e', 'f', 'g'},
        {'h', 'i', 'j', 'k', 'm'},
        {'n', 'p', 's', 't', 'u'},
        {'v', 'w', 'x', 'y', 'z'}
    };
    /* Array of characters that stores the input*/
    char input[100];
    fgets(input, sizeof(input), stdin);
    
    int k = 0;
    int i;
    int j;
    
    /* Reads the input and identifies they location of each
    character which is then returned as integers */
    while (input[k] != '\n') {
        for (i = 0; i < 5; i++) {
            for (j = 0; j < 5; j ++) {
                if (input[k] == 'q') {
                    continue;
                }
                else if (input[k] == square[i][j]) {
                    printf("%d%d", i, j);
                }
            }
        }
        k++;
    }
    printf("\n");

    return EXIT_SUCCESS;
}
