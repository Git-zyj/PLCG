#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1822350419;
unsigned short var_9 = (unsigned short)58003;
signed char var_11 = (signed char)62;
int var_12 = -744843726;
long long int var_13 = 6950051790283506053LL;
long long int var_14 = -8971432401917428918LL;
_Bool var_16 = (_Bool)1;
unsigned long long int var_17 = 17907333469166361404ULL;
unsigned short var_19 = (unsigned short)51420;
int zero = 0;
unsigned short var_20 = (unsigned short)15805;
unsigned char var_21 = (unsigned char)34;
unsigned int var_22 = 3326234740U;
int var_23 = -768504245;
int var_24 = 1775656005;
unsigned char var_25 = (unsigned char)25;
unsigned char var_26 = (unsigned char)215;
unsigned long long int var_27 = 13117544676150867358ULL;
_Bool arr_5 [19] ;
signed char arr_2 [24] ;
short arr_3 [24] ;
short arr_7 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (signed char)-61 : (signed char)73;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (short)-16350 : (short)30469;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_7 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)31235 : (short)23420;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
