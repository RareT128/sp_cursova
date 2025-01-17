#include <stdio.h>
int main() {
int _Cyccc;
int _Cycbc;
int _Cycac;
int _Remad;
int _Devid;
int _Value;

printf("Enter _Value: ");
scanf("%d", &_Value);
_Value = (1 + _Value);
goto _Ivann;
for(
_Cycac = 0;
_Cycac <= 32767;
++_Cycac
) _Devid = (_Value - 1);
for(
_Cycbc = 0;
_Cycbc <= 32767;
++_Cycbc
) if ((_Devid > 1)) _Remad = _Value;
for(
_Cyccc = 0;
_Cyccc <= 32767;
++_Cyccc
) if ((_Remad > (_Devid - 1))) _Remad = (_Remad - _Devid);
else _Cyccc = 32768;
_Cyccc = 0;
if ((_Remad == 0)) _Cycbc = 32768;
else _Cycbc = 32768;
_Cycbc = 0;
if ((_Devid == 1)) _Cycac = 32768;
_Value = (1 + _Value);
_Cycac = 0;
_Ivann:
printf("%d\n", _Value);
printf("Enter _Value: ");
scanf("%d", &_Value);
return 0;
}
