#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)63698;
long long int var_3 = -5023857035153409133LL;
signed char var_5 = (signed char)12;
unsigned short var_8 = (unsigned short)62661;
long long int var_10 = -4962649739398394776LL;
unsigned short var_11 = (unsigned short)62459;
unsigned short var_12 = (unsigned short)64209;
unsigned int var_13 = 2493898325U;
int zero = 0;
int var_14 = 2050598055;
unsigned long long int var_15 = 15338136774225079177ULL;
unsigned short var_16 = (unsigned short)2657;
unsigned short var_17 = (unsigned short)9465;
_Bool arr_4 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
