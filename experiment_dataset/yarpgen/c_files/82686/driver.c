#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 939660795U;
unsigned char var_9 = (unsigned char)94;
unsigned char var_14 = (unsigned char)144;
unsigned int var_15 = 615695144U;
unsigned char var_16 = (unsigned char)10;
signed char var_17 = (signed char)-78;
int zero = 0;
unsigned int var_20 = 868668941U;
signed char var_21 = (signed char)124;
int var_22 = -300252436;
unsigned char var_23 = (unsigned char)8;
unsigned int var_24 = 1997005607U;
unsigned char var_25 = (unsigned char)171;
unsigned int var_26 = 3551994210U;
unsigned char var_27 = (unsigned char)99;
int arr_4 [20] ;
unsigned int arr_7 [11] [11] ;
signed char arr_3 [19] [19] ;
unsigned int arr_6 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = -519694476;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_7 [i_0] [i_1] = 2449183278U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)41 : (signed char)-83;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = 1917406526U;
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
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
