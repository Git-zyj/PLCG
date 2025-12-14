#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-27;
signed char var_10 = (signed char)12;
unsigned int var_11 = 1891547988U;
int var_12 = 47649455;
unsigned long long int var_13 = 12245168385391803272ULL;
int zero = 0;
unsigned int var_14 = 1528145360U;
_Bool var_15 = (_Bool)0;
unsigned short var_16 = (unsigned short)8362;
unsigned long long int var_17 = 2768291853459050576ULL;
int var_18 = -757523415;
int var_19 = -265184616;
unsigned int arr_16 [22] ;
int arr_14 [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_16 [i_0] = 1804998138U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 827431442 : 1019303984;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_14 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
