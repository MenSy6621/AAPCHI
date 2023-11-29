#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <malloc.h>

int main() {
    int x;
    puts("Razmer");
    scanf_s("%d", &x);
    const int S = x;
    int n[S];
    srand(time(0));

    for (int i = 0; i < S; i++) {
        n[i] = rand();
        printf("%i ", n[i]);
    }

    
}