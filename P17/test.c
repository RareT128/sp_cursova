#include <stdio.h>
int main() {
int _y;
int _x;
int _b;
int _a;

printf("Enter _a: ");
scanf("%d", &_a);
printf("Enter _b: ");
scanf("%d", &_b);
printf("%d\n", (_a + _b));
printf("%d\n", (_a - _b));
printf("%d\n", (_a * _b));
printf("%d\n", (_a / _b));
printf("%d\n", (_a % _b));
_x = (((_a - _b) * 10) + ((_a + _b) / 10));
_y = (_x + (_x % 10));
printf("%d\n", _x);
printf("%d\n", _y);
return 0;
}
