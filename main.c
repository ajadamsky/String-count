#include <stdio.h>
#include <string.h>

int main() {

    int i;
    const int maxSize = 50;
    char s[maxSize];
    int counts[250] = {0};

    printf("Please type a string: ");

    // Read a string from standard input (keyboard) using fgets
    fgets(s, maxSize, stdin);

    size_t len = strlen(s);
    for (i = 0; i < len; i++) {
        counts[(int)(s[i])]++;
    }
    for (i = 0; i < 250; i++) {
        if(counts[i]>0)
            printf("'%c' : %d\n", i , counts[i]);
    }


}