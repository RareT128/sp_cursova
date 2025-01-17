#include <stdio.h>
int main() {
int _Yyyyy;
int _Xxxxx;
int _Bbbbb;
int _Aaaaa;

printf("Enter _Aaaaa: ");
scanf("%d", &_Aaaaa);
printf("Enter _Bbbbb: ");
scanf("%d", &_Bbbbb);
printf("%d\n", (_Aaaaa + _Bbbbb));
printf("%d\n", (_Aaaaa - _Bbbbb));
printf("%d\n", (_Aaaaa * _Bbbbb));
printf("%d\n", (_Aaaaa / _Bbbbb));
printf("%d\n", (_Aaaaa % _Bbbbb));
_Xxxxx = (((_Aaaaa - _Bbbbb) * 10) + ((_Aaaaa + _Bbbbb) / 10));
_Yyyyy = (_Xxxxx + (_Xxxxx % 10));
printf("%d\n", _Xxxxx);
printf("%d\n", _Yyyyy);
return 0;
}
