#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -183206789265860809LL;
long long int var_1 = -6677429410363517751LL;
signed char var_4 = (signed char)-99;
unsigned int var_6 = 3090536198U;
int var_7 = -360898076;
long long int var_10 = -3623685997382662473LL;
unsigned int var_12 = 4258054217U;
long long int var_14 = -8751900972785656143LL;
int var_17 = 1158499642;
int zero = 0;
_Bool var_20 = (_Bool)1;
signed char var_21 = (signed char)-46;
unsigned long long int var_22 = 2938410476552158943ULL;
short var_23 = (short)19908;
_Bool var_24 = (_Bool)1;
_Bool var_25 = (_Bool)0;
unsigned char arr_0 [16] ;
signed char arr_3 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (unsigned char)22;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)17;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
