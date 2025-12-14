#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)95;
unsigned long long int var_3 = 1669422446441667019ULL;
unsigned long long int var_5 = 4340369975394601243ULL;
_Bool var_6 = (_Bool)0;
unsigned long long int var_7 = 4322316337264972731ULL;
unsigned int var_8 = 62779093U;
unsigned char var_9 = (unsigned char)155;
int zero = 0;
short var_11 = (short)26744;
unsigned long long int var_12 = 2611677967720212625ULL;
short var_13 = (short)-11783;
short var_14 = (short)20814;
short var_15 = (short)24889;
_Bool var_16 = (_Bool)1;
_Bool arr_0 [19] ;
_Bool arr_1 [19] ;
_Bool arr_4 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
