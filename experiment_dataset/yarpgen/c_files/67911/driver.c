#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)230;
unsigned char var_1 = (unsigned char)147;
signed char var_3 = (signed char)78;
unsigned long long int var_4 = 8004389547776383947ULL;
int var_5 = -2088694603;
short var_6 = (short)13958;
unsigned char var_7 = (unsigned char)73;
unsigned long long int var_8 = 14510214187772093056ULL;
unsigned int var_10 = 1013642982U;
int var_11 = 1963622023;
int zero = 0;
unsigned long long int var_12 = 370169356656078508ULL;
unsigned long long int var_13 = 34876978201875316ULL;
short var_14 = (short)18058;
short var_15 = (short)20540;
long long int var_16 = -3341113488912171936LL;
unsigned int var_17 = 1808492132U;
int arr_0 [24] ;
short arr_1 [24] ;
unsigned int arr_4 [24] [24] ;
signed char arr_5 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = -14318891;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (short)-5745;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_4 [i_0] [i_1] = 3549898087U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_5 [i_0] [i_1] = (signed char)-48;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
