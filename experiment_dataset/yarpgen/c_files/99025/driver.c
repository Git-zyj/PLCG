#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11977029090583011778ULL;
unsigned short var_2 = (unsigned short)13562;
unsigned short var_3 = (unsigned short)38913;
signed char var_4 = (signed char)-8;
unsigned short var_7 = (unsigned short)52344;
unsigned int var_10 = 1788740878U;
short var_11 = (short)4868;
signed char var_12 = (signed char)90;
int zero = 0;
long long int var_13 = -6119259404930273199LL;
_Bool var_14 = (_Bool)1;
unsigned short var_15 = (unsigned short)22374;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 3323974127U;
unsigned int var_18 = 2059174030U;
short var_19 = (short)-7449;
short arr_4 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_4 [i_0] [i_1] = (short)-14160;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
