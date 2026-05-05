#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
int i, k;
printf("Unesi ceo broj:");
scanf("%d", &k);
if(k%2)
printf("Broj je neparan");
else
for(i=k+1;i<=k+10;i++)
printf("%d\n", i);
return 0;
}
