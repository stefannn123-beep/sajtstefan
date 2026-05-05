#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main() {
int x[10], i, j;
srand(time(0));
for(i=0; i<10; i++) {
x[i] = rand();
}
for(i=0; i<10; i++) {
printf("%.d\n", x[i]);
}
return 0;
}
