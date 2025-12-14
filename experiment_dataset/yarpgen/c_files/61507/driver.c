#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)6;
_Bool var_3 = (_Bool)0;
short var_6 = (short)26298;
short var_9 = (short)-9506;
signed char var_10 = (signed char)94;
int zero = 0;
short var_14 = (short)31263;
short var_15 = (short)7291;
signed char var_16 = (signed char)-50;
short var_17 = (short)-28337;
short var_18 = (short)-12269;
short arr_0 [18] [18] ;
short arr_1 [18] ;
_Bool arr_2 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = (short)6479;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (short)15367;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
