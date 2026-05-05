#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
    int i, j, k, n;
    printf("Unesi broj k: ");
    scanf("%d", &k);
    printf("Unesi broj n: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
        printf("%d\n", i * k);
    return 0;
}
