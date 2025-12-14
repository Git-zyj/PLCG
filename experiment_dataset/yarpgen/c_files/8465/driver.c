#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
int var_4 = 1407114653;
_Bool var_5 = (_Bool)1;
unsigned short var_6 = (unsigned short)59902;
unsigned short var_8 = (unsigned short)58126;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned short var_14 = (unsigned short)33846;
unsigned short var_15 = (unsigned short)7438;
unsigned long long int var_16 = 10495719072315136919ULL;
_Bool var_17 = (_Bool)0;
unsigned short var_18 = (unsigned short)62960;
signed char var_19 = (signed char)-25;
_Bool arr_2 [25] ;
unsigned short arr_7 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (unsigned short)52468 : (unsigned short)57834;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
