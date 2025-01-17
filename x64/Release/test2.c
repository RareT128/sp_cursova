#include <stdio.h>
int main() {
int _Ccccc;
int _Bbbbb;
int _Aaaaa;

printf("Enter _Aaaaa: ");
scanf("%d", &_Aaaaa);
printf("Enter _Bbbbb: ");
scanf("%d", &_Bbbbb);
printf("Enter _Ccccc: ");
scanf("%d", &_Ccccc);
if ((_Aaaaa > _Bbbbb)) if ((_Aaaaa > _Ccccc)) printf("%d\n", _Aaaaa);
else printf("%d\n", _Ccccc);
else if ((_Bbbbb > _Ccccc)) printf("%d\n", _Bbbbb);
else printf("%d\n", _Ccccc);
if (((_Aaaaa == _Bbbbb) && ((_Aaaaa == _Ccccc) && (_Bbbbb == _Ccccc)))) printf("%d\n", 1);
else printf("%d\n", 0);
if (((_Aaaaa < 0) || ((_Bbbbb < 0) || (_Ccccc < 0)))) printf("%d\n", -1);
else printf("%d\n", 0);
if (!((_Aaaaa < (_Bbbbb + _Ccccc)))) printf("%d\n", 10);
else printf("%d\n", 0);
return 0;
}
