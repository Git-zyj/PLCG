#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1808291800648535627ULL;
signed char var_4 = (signed char)-5;
_Bool var_13 = (_Bool)0;
unsigned long long int var_15 = 7222847469460392068ULL;
unsigned int var_17 = 1272855132U;
int zero = 0;
int var_20 = 1712874528;
short var_21 = (short)-3223;
unsigned short var_22 = (unsigned short)2651;
signed char var_23 = (signed char)-41;
_Bool var_24 = (_Bool)1;
short arr_0 [23] ;
signed char arr_3 [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (short)-13060;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (signed char)-99;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
