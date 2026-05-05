#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
    int i, j, k;
    printf("Unesi vrednost k: ");
    scanf("%d", &k);
    for(i = 0; i <= k; i++)
        printf("%d ", i * 2);
    return 0;
}
