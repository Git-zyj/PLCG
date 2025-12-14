#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)45252;
unsigned int var_9 = 1730096768U;
unsigned int var_10 = 2150937347U;
short var_12 = (short)4162;
unsigned short var_13 = (unsigned short)46779;
unsigned short var_14 = (unsigned short)31424;
int zero = 0;
unsigned int var_16 = 929650952U;
unsigned int var_17 = 2295547533U;
unsigned int var_18 = 2036026362U;
unsigned long long int var_19 = 4242020565316727427ULL;
unsigned int arr_1 [14] [14] ;
unsigned short arr_2 [14] [14] [14] ;
signed char arr_3 [14] ;
unsigned int arr_6 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = 3883161565U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (unsigned short)36310;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (signed char)103;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = 3581864318U;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
