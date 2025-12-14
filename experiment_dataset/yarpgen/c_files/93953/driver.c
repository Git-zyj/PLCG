#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_1 = -7742610766292341330LL;
_Bool var_2 = (_Bool)1;
short var_3 = (short)23647;
signed char var_4 = (signed char)89;
signed char var_5 = (signed char)-109;
long long int var_6 = -7341557129305378093LL;
_Bool var_7 = (_Bool)0;
unsigned short var_8 = (unsigned short)42726;
long long int var_9 = -30274496523615364LL;
unsigned char var_10 = (unsigned char)64;
signed char var_11 = (signed char)-84;
signed char var_12 = (signed char)-66;
_Bool var_13 = (_Bool)1;
_Bool var_14 = (_Bool)1;
_Bool var_15 = (_Bool)1;
unsigned char var_16 = (unsigned char)11;
signed char var_17 = (signed char)-13;
unsigned char var_18 = (unsigned char)31;
int var_19 = -938936877;
int zero = 0;
_Bool var_20 = (_Bool)1;
long long int var_21 = -1138746422444487609LL;
unsigned char var_22 = (unsigned char)101;
_Bool var_23 = (_Bool)1;
unsigned char var_24 = (unsigned char)85;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
