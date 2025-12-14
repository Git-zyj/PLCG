#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -2145644280;
unsigned int var_6 = 3024789799U;
unsigned char var_8 = (unsigned char)227;
_Bool var_9 = (_Bool)0;
_Bool var_10 = (_Bool)0;
unsigned char var_11 = (unsigned char)236;
int zero = 0;
unsigned int var_13 = 1516228789U;
unsigned int var_14 = 1592361390U;
short var_15 = (short)9833;
int var_16 = 1890240096;
unsigned char var_17 = (unsigned char)238;
signed char var_18 = (signed char)104;
signed char var_19 = (signed char)-113;
long long int arr_1 [19] ;
unsigned char arr_13 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = -2168658524579037703LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_13 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)50 : (unsigned char)107;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
