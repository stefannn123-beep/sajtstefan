#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

class Krug {
private:
float pp;
public:
int x;
void dodeli(float r) {
pp = r;
}
float obim() {
return 2 * pp * 3.14f;
}
float povrsina() {
return pp * pp * 3.14f;
}
};

int main() {
Krug k;
float r;
printf("Unesi poluprecnik\n");
scanf("%f", &r);
k.dodeli(r);
printf("Obim kruga je: %.2f\n", k.obim());
printf("Povrsina kruga je: %.2f\n", k.povrsina());
return 0;
}

