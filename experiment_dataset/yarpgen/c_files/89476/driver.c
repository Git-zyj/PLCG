#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)29608;
unsigned short var_4 = (unsigned short)54050;
unsigned long long int var_9 = 549101549783787837ULL;
unsigned char var_10 = (unsigned char)55;
_Bool var_11 = (_Bool)1;
short var_12 = (short)-22053;
int zero = 0;
long long int var_13 = -2851060105185873249LL;
signed char var_14 = (signed char)-42;
signed char var_15 = (signed char)110;
_Bool var_16 = (_Bool)1;
signed char var_17 = (signed char)-24;
_Bool arr_0 [17] ;
unsigned long long int arr_1 [17] [17] ;
unsigned int arr_5 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = 7390306398414822819ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = 3903984158U;
}

void checksum() {
    hash(&seed, var_13);
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
