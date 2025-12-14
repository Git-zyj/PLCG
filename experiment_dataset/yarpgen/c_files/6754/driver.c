#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1396254549;
unsigned int var_3 = 145929907U;
int var_5 = -231547934;
long long int var_8 = 4826989319353518431LL;
unsigned short var_11 = (unsigned short)25132;
signed char var_12 = (signed char)-94;
signed char var_13 = (signed char)82;
long long int var_17 = -4842088034970037176LL;
int zero = 0;
unsigned short var_19 = (unsigned short)6875;
unsigned short var_20 = (unsigned short)7323;
signed char var_21 = (signed char)101;
unsigned int var_22 = 3042436542U;
signed char var_23 = (signed char)97;
signed char var_24 = (signed char)-10;
unsigned short var_25 = (unsigned short)2013;
unsigned short var_26 = (unsigned short)40505;
long long int var_27 = 6131904392461116876LL;
short arr_1 [22] ;
unsigned short arr_2 [22] [22] [22] ;
unsigned short arr_3 [22] ;
unsigned short arr_6 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (short)-28827;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (unsigned short)9177;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (unsigned short)36517;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = (unsigned short)12292;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
