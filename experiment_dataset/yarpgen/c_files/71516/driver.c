#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-104;
short var_12 = (short)-19423;
unsigned long long int var_14 = 18262564869500580862ULL;
int zero = 0;
signed char var_16 = (signed char)-104;
signed char var_17 = (signed char)-122;
unsigned int var_18 = 3424855601U;
_Bool var_19 = (_Bool)1;
signed char var_20 = (signed char)45;
signed char var_21 = (signed char)109;
signed char var_22 = (signed char)109;
unsigned long long int arr_3 [14] [14] [14] ;
unsigned long long int arr_8 [11] ;
signed char arr_5 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 3247831515793805002ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_8 [i_0] = 3432768421305698777ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (signed char)126 : (signed char)-85;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
