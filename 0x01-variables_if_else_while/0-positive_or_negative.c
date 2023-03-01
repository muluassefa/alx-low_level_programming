#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int n = rand() - RAND_MAX / 2;
    // The code you have to write starts here
    printf("The number %d ", n);
    if (n > 0) {
        printf("is positive\n");
    }
    else if (n == 0) {
        printf("is zero\n");
    }
    else {
        printf("is negative\n");
    }

    // The code you have to write ends here
    return 0;
}
