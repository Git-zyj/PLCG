#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 17528520420880896612ULL;
unsigned char var_4 = (unsigned char)161;
short var_5 = (short)1389;
long long int var_7 = 6860812273267548153LL;
short var_11 = (short)-17743;
long long int var_12 = 1350125263796540678LL;
unsigned char var_13 = (unsigned char)99;
int zero = 0;
short var_14 = (short)-7780;
int var_15 = -1377267053;
unsigned char arr_1 [11] ;
short arr_2 [11] ;
signed char arr_5 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (unsigned char)40;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (short)20248;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_5 [i_0] [i_1] = (signed char)-30;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
