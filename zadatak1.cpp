#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
    int i, m, k;
    printf("Unesi vrednost k: ");
    scanf("%d", &k);
    printf("Unesi vrednost m: ");
    scanf("%d", &m);
    for(i = k; i <= m; i++)
        printf("%d\n", i);
    return 0;
}
