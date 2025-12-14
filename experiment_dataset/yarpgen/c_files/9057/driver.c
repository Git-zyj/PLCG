#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3720629304U;
unsigned char var_2 = (unsigned char)54;
unsigned char var_3 = (unsigned char)191;
unsigned int var_4 = 3492569827U;
short var_5 = (short)-6709;
_Bool var_6 = (_Bool)1;
long long int var_7 = -5277842838458903560LL;
_Bool var_8 = (_Bool)1;
short var_9 = (short)27137;
unsigned int var_10 = 2937300924U;
int zero = 0;
short var_12 = (short)7114;
short var_13 = (short)-20523;
_Bool var_14 = (_Bool)1;
short var_15 = (short)3931;
unsigned int var_16 = 2210306832U;
short var_17 = (short)24491;
unsigned long long int var_18 = 15892587387541202317ULL;
short var_19 = (short)-2658;
unsigned int var_20 = 2097412874U;
long long int var_21 = 8497037226290973282LL;
unsigned char arr_4 [12] ;
signed char arr_8 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = (unsigned char)112;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_8 [i_0] = (signed char)-63;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
