#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3520057242U;
short var_3 = (short)20718;
_Bool var_4 = (_Bool)1;
long long int var_5 = -3982875662599949904LL;
unsigned int var_8 = 75555399U;
unsigned char var_9 = (unsigned char)98;
unsigned short var_10 = (unsigned short)39575;
_Bool var_11 = (_Bool)0;
int zero = 0;
short var_12 = (short)-14315;
unsigned char var_13 = (unsigned char)150;
long long int var_14 = -2657525580055563432LL;
long long int var_15 = -4979944334758532414LL;
short var_16 = (short)19650;
int var_17 = 2112892611;
_Bool arr_2 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
