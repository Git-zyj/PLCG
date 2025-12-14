#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1906175320047664219LL;
short var_1 = (short)-11204;
short var_4 = (short)5332;
long long int var_7 = -7080232194225239538LL;
short var_9 = (short)21082;
short var_12 = (short)-28519;
int zero = 0;
unsigned char var_13 = (unsigned char)113;
unsigned long long int var_14 = 12257244134093765958ULL;
_Bool var_15 = (_Bool)0;
long long int var_16 = -5409554393896333893LL;
_Bool var_17 = (_Bool)0;
unsigned char arr_0 [19] [19] ;
signed char arr_3 [19] ;
signed char arr_4 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)100;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (signed char)-7;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)116 : (signed char)16;
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
