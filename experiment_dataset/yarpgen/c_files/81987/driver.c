#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -2185484853078362668LL;
unsigned long long int var_2 = 17577390375305073569ULL;
unsigned short var_3 = (unsigned short)45135;
int var_4 = -1042636340;
short var_5 = (short)17095;
unsigned long long int var_10 = 8375535742835688795ULL;
unsigned short var_11 = (unsigned short)38179;
_Bool var_12 = (_Bool)1;
unsigned short var_13 = (unsigned short)4049;
unsigned int var_16 = 1231991241U;
int zero = 0;
unsigned int var_19 = 4110729961U;
_Bool var_20 = (_Bool)1;
unsigned short var_21 = (unsigned short)12451;
_Bool arr_5 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
