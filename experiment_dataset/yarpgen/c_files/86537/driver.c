#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 2139279938967507178LL;
unsigned char var_7 = (unsigned char)243;
short var_11 = (short)-11308;
short var_13 = (short)18558;
unsigned short var_15 = (unsigned short)18741;
unsigned short var_17 = (unsigned short)828;
int zero = 0;
unsigned long long int var_20 = 13685855407352971638ULL;
unsigned char var_21 = (unsigned char)12;
unsigned char var_22 = (unsigned char)211;
unsigned int var_23 = 901153845U;
_Bool var_24 = (_Bool)0;
int arr_2 [21] [21] ;
unsigned short arr_4 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = 1900512246;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned short)40052 : (unsigned short)11887;
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
