#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12074775227985303211ULL;
long long int var_2 = -8584174637603263120LL;
unsigned long long int var_3 = 2139492498204923123ULL;
unsigned short var_4 = (unsigned short)13825;
unsigned short var_5 = (unsigned short)13312;
_Bool var_7 = (_Bool)1;
long long int var_8 = 1924410443405797681LL;
long long int var_9 = 5090877044820277931LL;
unsigned short var_10 = (unsigned short)5914;
int zero = 0;
int var_11 = -1225883077;
unsigned int var_12 = 215385962U;
unsigned int var_13 = 749940330U;
long long int var_14 = -1240671418731089298LL;
long long int var_15 = -5109306363937764435LL;
unsigned short arr_1 [23] ;
short arr_7 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (unsigned short)43416 : (unsigned short)28131;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (short)-13661 : (short)-25929;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
