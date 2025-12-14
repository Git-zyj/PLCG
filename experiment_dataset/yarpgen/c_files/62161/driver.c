#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)54701;
unsigned short var_1 = (unsigned short)19058;
unsigned short var_2 = (unsigned short)50853;
unsigned short var_6 = (unsigned short)28019;
unsigned short var_7 = (unsigned short)1488;
unsigned short var_9 = (unsigned short)56346;
unsigned short var_10 = (unsigned short)44389;
int zero = 0;
unsigned short var_11 = (unsigned short)47973;
unsigned short var_12 = (unsigned short)28034;
unsigned short var_13 = (unsigned short)16909;
unsigned short var_14 = (unsigned short)5376;
unsigned short var_15 = (unsigned short)56269;
unsigned short var_16 = (unsigned short)10253;
unsigned short var_17 = (unsigned short)10105;
unsigned short var_18 = (unsigned short)9876;
unsigned short var_19 = (unsigned short)52483;
unsigned short var_20 = (unsigned short)25669;
unsigned short var_21 = (unsigned short)28484;
unsigned short var_22 = (unsigned short)59833;
unsigned short arr_0 [24] ;
unsigned short arr_2 [24] ;
unsigned short arr_20 [21] ;
unsigned short arr_23 [21] [21] ;
unsigned short arr_25 [21] ;
unsigned short arr_7 [16] ;
unsigned short arr_19 [15] ;
unsigned short arr_29 [21] ;
unsigned short arr_30 [21] [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (unsigned short)7836;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (unsigned short)59761;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_20 [i_0] = (unsigned short)12295;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_23 [i_0] [i_1] = (unsigned short)22748;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_25 [i_0] = (unsigned short)9166;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_7 [i_0] = (unsigned short)48956;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_19 [i_0] = (unsigned short)18966;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_29 [i_0] = (unsigned short)20083;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_30 [i_0] [i_1] [i_2] [i_3] = (unsigned short)45144;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_19 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_29 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    hash(&seed, arr_30 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
