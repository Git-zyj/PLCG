#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)246;
_Bool var_2 = (_Bool)1;
long long int var_3 = 357152613892009700LL;
unsigned char var_4 = (unsigned char)3;
int var_5 = 2039790372;
int var_7 = -618243258;
unsigned int var_9 = 3968467742U;
unsigned int var_12 = 3293847465U;
unsigned int var_13 = 2157611369U;
unsigned char var_15 = (unsigned char)128;
unsigned short var_18 = (unsigned short)48920;
int zero = 0;
unsigned int var_19 = 2148883467U;
short var_20 = (short)32205;
int var_21 = 1683813488;
short var_22 = (short)-27315;
unsigned char var_23 = (unsigned char)6;
unsigned char var_24 = (unsigned char)152;
unsigned int var_25 = 1631908107U;
unsigned int arr_1 [25] ;
long long int arr_2 [25] [25] ;
unsigned char arr_4 [25] [25] ;
short arr_11 [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = 1897775373U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = -3033953427014798486LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)206;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (short)16834;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_11 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
