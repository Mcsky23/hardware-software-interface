#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int seed = time(NULL);
    srandom(seed);
    int secret = random() + 1337;
    printf("%d\n", secret);
    return 0;
}