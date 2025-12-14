#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1437257810U;
signed char var_2 = (signed char)58;
unsigned short var_3 = (unsigned short)20240;
long long int var_6 = -5291581369998513711LL;
unsigned long long int var_7 = 7591568245066985567ULL;
int zero = 0;
short var_13 = (short)23473;
unsigned int var_14 = 1321667503U;
unsigned char var_15 = (unsigned char)166;
long long int var_16 = 8752636792715456235LL;
signed char var_17 = (signed char)-86;
short var_18 = (short)26055;
unsigned short arr_2 [23] [23] [23] ;
unsigned long long int arr_11 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (unsigned short)9295;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_11 [i_0] [i_1] = (i_1 % 2 == 0) ? 13961302591901979507ULL : 3767001488533950008ULL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
