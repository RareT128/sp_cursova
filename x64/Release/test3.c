#include <stdio.h>
int main() {
int _Jjjjj;
int _Iiiii;
int _Xxxxx;
int _Bbbbb;
int _Aaaaa;

printf("Enter _Aaaaa: ");
scanf("%d", &_Aaaaa);
printf("Enter _Bbbbb: ");
scanf("%d", &_Bbbbb);
for(
_Xxxxx = _Aaaaa;
_Xxxxx <= _Bbbbb;
++_Xxxxx
) printf("%d\n", (_Xxxxx * _Xxxxx));
_Xxxxx = 0;
for(
_Iiiii = 1;
_Iiiii <= _Aaaaa;
++_Iiiii
) for(
_Jjjjj = 1;
_Jjjjj <= _Bbbbb;
++_Jjjjj
) _Xxxxx = (_Xxxxx + 1);
printf("%d\n", _Xxxxx);
return 0;
}
