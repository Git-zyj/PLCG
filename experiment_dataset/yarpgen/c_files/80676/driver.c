#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)146;
_Bool var_1 = (_Bool)0;
unsigned int var_3 = 476672046U;
_Bool var_4 = (_Bool)0;
unsigned char var_5 = (unsigned char)215;
unsigned long long int var_6 = 11902808817086831743ULL;
_Bool var_9 = (_Bool)1;
unsigned int var_10 = 278400290U;
unsigned short var_11 = (unsigned short)38791;
unsigned int var_12 = 1097745345U;
int zero = 0;
int var_14 = -143796129;
unsigned int var_15 = 3384075898U;
signed char var_16 = (signed char)83;
unsigned char arr_9 [18] [18] ;
short arr_10 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_9 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)115 : (unsigned char)44;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? (short)-21978 : (short)8608;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
