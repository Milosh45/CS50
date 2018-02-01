#include <stdio.h>
#include <cs50.h>

int main() {
    int spaces = 7, hashes = 2;
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < spaces; j++) {
            printf(" ");
        }
        for (int k = 0; k < hashes; k++) {
            printf("#");
        }
        printf("\n");
        spaces = spaces - 1;
        hashes = hashes + 1;
    }

}
