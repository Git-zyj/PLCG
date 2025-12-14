#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 3871022335992536152LL;
unsigned int var_2 = 155242286U;
unsigned char var_3 = (unsigned char)45;
unsigned long long int var_6 = 14256936626440019215ULL;
signed char var_7 = (signed char)66;
unsigned int var_8 = 2799545259U;
unsigned char var_9 = (unsigned char)237;
long long int var_10 = 309888179759198993LL;
unsigned char var_13 = (unsigned char)50;
int zero = 0;
unsigned char var_14 = (unsigned char)184;
unsigned long long int var_15 = 1490116103085296356ULL;
unsigned int var_16 = 2092793861U;
long long int var_17 = 2713345508579705786LL;
long long int arr_0 [13] [13] ;
unsigned char arr_1 [13] ;
signed char arr_2 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = -5187673008713119544LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (unsigned char)48;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (signed char)-83;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
