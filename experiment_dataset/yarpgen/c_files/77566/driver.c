#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_5 = 3884104944U;
unsigned int var_6 = 4255278455U;
long long int var_11 = 4117663552352818701LL;
short var_13 = (short)13632;
unsigned int var_15 = 3381890256U;
int var_16 = 1993844608;
short var_17 = (short)-1471;
_Bool var_19 = (_Bool)1;
int zero = 0;
short var_20 = (short)9863;
short var_21 = (short)8889;
unsigned int var_22 = 792613177U;
unsigned int var_23 = 285791267U;
long long int var_24 = -7343888980214111000LL;
short var_25 = (short)14439;
short var_26 = (short)-13075;
unsigned int var_27 = 545045158U;
short var_28 = (short)-6527;
unsigned int var_29 = 1708796214U;
int arr_0 [17] ;
int arr_3 [11] ;
unsigned int arr_4 [11] [11] ;
unsigned int arr_10 [11] [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = -369865524;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = 74198713;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_4 [i_0] [i_1] = 536412437U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = 654359661U;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
