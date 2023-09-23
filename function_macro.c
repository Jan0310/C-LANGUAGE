#include <stdio.h>
#define AreaOfCircle(r) (Pi*(r*r))
#define Pi 3.14
int main() {
    float r = 4.4;
    float area = AreaOfCircle(r);
    printf("The area of circle is : %f\n ", area);
    return 0;
}