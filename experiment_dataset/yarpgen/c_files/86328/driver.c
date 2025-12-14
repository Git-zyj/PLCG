#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 72511897;
_Bool var_3 = (_Bool)1;
_Bool var_4 = (_Bool)0;
unsigned int var_5 = 1194823765U;
unsigned int var_6 = 499323773U;
_Bool var_7 = (_Bool)0;
unsigned short var_9 = (unsigned short)53431;
unsigned int var_11 = 3477784907U;
int zero = 0;
unsigned long long int var_12 = 14751848026799394998ULL;
int var_13 = -836852240;
short var_14 = (short)29953;
unsigned char var_15 = (unsigned char)38;
_Bool var_16 = (_Bool)0;
short var_17 = (short)-14757;
int var_18 = -951631272;
unsigned long long int var_19 = 10465316883203683601ULL;
long long int var_20 = -87180304530902562LL;
unsigned short arr_16 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? (unsigned short)2927 : (unsigned short)6449;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_16 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
