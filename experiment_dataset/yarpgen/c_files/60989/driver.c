#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_1 = (unsigned short)16886;
unsigned int var_2 = 4032513691U;
int var_3 = -551013592;
int var_4 = -1998465167;
unsigned short var_5 = (unsigned short)22458;
unsigned short var_8 = (unsigned short)1455;
_Bool var_9 = (_Bool)0;
unsigned int var_10 = 1772904602U;
_Bool var_11 = (_Bool)0;
unsigned char var_12 = (unsigned char)113;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned int var_14 = 2955119129U;
unsigned int var_15 = 988279193U;
unsigned short var_16 = (unsigned short)36076;
signed char var_17 = (signed char)-90;
unsigned short var_18 = (unsigned short)38751;
int var_19 = 1925471887;
unsigned short var_20 = (unsigned short)9331;
long long int arr_12 [16] [16] ;
unsigned int arr_16 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_12 [i_0] [i_1] = (i_1 % 2 == 0) ? -239353556692896742LL : 3008655611313673723LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? 2988713820U : 1479243495U;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_16 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
