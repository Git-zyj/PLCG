#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
signed char var_4 = (signed char)-9;
unsigned short var_6 = (unsigned short)56915;
int var_7 = -422002097;
unsigned short var_10 = (unsigned short)38504;
signed char var_11 = (signed char)118;
int zero = 0;
unsigned long long int var_13 = 13520002200531053664ULL;
unsigned char var_14 = (unsigned char)51;
unsigned long long int var_15 = 14233188645515536257ULL;
signed char var_16 = (signed char)47;
unsigned long long int var_17 = 2471072515598535200ULL;
unsigned short var_18 = (unsigned short)58949;
signed char arr_1 [19] ;
unsigned int arr_2 [19] ;
unsigned int arr_4 [16] [16] ;
int arr_5 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (signed char)-84;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = 843695803U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_4 [i_0] [i_1] = 4282882871U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = -1263543806;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
