#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1108997673;
_Bool var_1 = (_Bool)0;
_Bool var_2 = (_Bool)1;
_Bool var_3 = (_Bool)1;
unsigned long long int var_4 = 15616479682435064733ULL;
int var_5 = -404572579;
int var_6 = 874664522;
unsigned char var_7 = (unsigned char)240;
short var_8 = (short)-16663;
long long int var_9 = -1452535834615188912LL;
short var_10 = (short)-9893;
int zero = 0;
int var_11 = -237821551;
unsigned int var_12 = 824586573U;
unsigned short var_13 = (unsigned short)19725;
int var_14 = -241856998;
long long int arr_4 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? 5185838848348318656LL : 7900047348329233625LL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
